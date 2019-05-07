// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#include "SDuplicateSpecialTools.h"
#include "SlateOptMacros.h"
#include "Engine/Selection.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "PropertyHandle.h"
#include "Modules/ModuleManager.h"
#include "EditorModeManager.h"
#include "DuplicateSpecialSettings.h"
#include "Engine/World.h"
#include "Slate.h"
#include "SlateOptMacros.h"
#include "ObjectFunctions.h"
#include <vector>
using namespace std;

/*
Sets up the Edit Mode window and calls the duplicate function ( CloneActor() )
on button click.

Based on the values for the boolean checkboxes, the translation, rotation,
and scale of the new, duplicated actors will use either the relative transform
functions or the world space transform functions.

Then, if the checkbox for selecting the duplicated actors after duplicating is checked,
the editor's selection will be set to all of the new, duplicated actors.
*/


#define LOCTEXT_NAMESPACE "DuplicateSpecialEditModeTools"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SDuplicateSpecialTools::Construct(const FArguments& InArgs)
{
	// initialize settings view
	FDetailsViewArgs DetailsViewArgs;
	{
		DetailsViewArgs.bAllowSearch = true;
		DetailsViewArgs.bHideSelectionTip = true;
		DetailsViewArgs.bLockable = false;
		DetailsViewArgs.bSearchInitialKeyFocus = true;
		DetailsViewArgs.bUpdatesFromSelection = false;
		DetailsViewArgs.bShowOptions = true;
		DetailsViewArgs.bShowModifiedPropertiesOption = true;
		DetailsViewArgs.bShowActorLabel = false;
		DetailsViewArgs.bCustomNameAreaLocation = true;
		DetailsViewArgs.bCustomFilterAreaLocation = true;
		DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
		DetailsViewArgs.bAllowMultipleTopLevelObjects = true;
		DetailsViewArgs.bShowScrollBar = false;
	}

	// Set up details view
	DetailsView = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor").CreateDetailView(DetailsViewArgs);
	DetailsView->SetIsPropertyVisibleDelegate(FIsPropertyVisible::CreateSP(this, &SDuplicateSpecialTools::ShouldShowPropertyOnDetailCustomization));
	DetailsView->SetIsPropertyReadOnlyDelegate(FIsPropertyReadOnly::CreateSP(this, &SDuplicateSpecialTools::IsReadOnlyPropertyOnDetailCustomization));

	// Get a reference to Settings
	UDuplicateSpecialSettings* Settings = NewObject<UDuplicateSpecialSettings>(GetTransientPackage(), *LOCTEXT("SettingsName", "DuplicateSpecialEdMode Settings").ToString());
	DuplicationOptions::SettingsRef = Settings;


	struct Locals
	{
		static bool IsWidgetEnabled()
		{
			return GEditor->GetSelectedActors()->Num() != 0;
		}

		static FReply OnButtonClick()
		{
			// Get current selected actors and clear cloned list
			USelection* SelectedActors = GEditor->GetSelectedActors();

			// Let editor know that we're about to do something that we want to undo/redo
			GEditor->BeginTransaction(LOCTEXT("MoveActorsTransactionName", "MoveActors"));
			
			// Vector to store actors to append a number to their name
			vector<vector<AActor*>> NamingVector;

			// Run through the duplication process for the given amount of loops
			for (int i = 0; i < DuplicationOptions::GetNumberOfCopies(); i++)
			{
				// Add vector for this loop cycle
				vector<AActor*> NamingVectVector;
				NamingVector.push_back(NamingVectVector);

				ObjectTransforms::ClonedActors.Empty();

				// For each selected actor
				for (FSelectionIterator Iter(*SelectedActors); Iter; ++Iter)
				{
					if (AActor* LevelActor = Cast<AActor>(*Iter))
					{
						// Register actor in opened transaction (undo/redo)
						LevelActor->Modify();

						// Get the input Location, Rotation, and Scale
						FVector Location(ObjectTransforms::GetLocation());
						FRotator Rotation(ObjectTransforms::GetRotation());
						FVector Scale(ObjectTransforms::GetScale());

						// Duplicate the actor
						AActor* ClonedActor = CloneActor(LevelActor);


						// If enabled, attach cloned actor under the original actor. Note: Important to call this before transforms so it can spawn at LevelActor's location
						if (DuplicationOptions::GetAttachToParent())
						{
							ClonedActor->AttachToActor(LevelActor, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true));

							// If enabled, set the file path for the attached parent of the clone to this folder
							if (DuplicationOptions::GetCreateNewOutlinerFolder())
							{
								GetHighestAttachedParent(LevelActor)->SetFolderPath(DuplicationOptions::GetFolderPathName());
							}
						}
						// If enabled, set the file path for the cloned actor to this folder
						else if (DuplicationOptions::GetCreateNewOutlinerFolder())
						{
							ClonedActor->SetFolderPath(DuplicationOptions::GetFolderPathName());
						}


						// Translate the duplicated actor (relative or world)
						if (ObjectTransforms::GetTransRel())
						{
							TranslateRelative(ClonedActor, Location);
						}
						else
						{
							TranslateWorld(ClonedActor, Location);
						}

						// Rotate the duplicated actor (relative or world)
						if (ObjectTransforms::GetRotateRel())
						{
							RotateRelative(ClonedActor, Rotation);
						}
						else
						{
							RotateWorld(ClonedActor, Rotation);
						}

						// Scale the duplicated actor (relative or absolute)
						if (ObjectTransforms::GetScaleRel())
						{
							ScaleRelative(ClonedActor, Scale, LevelActor->GetActorRelativeScale3D());
						}
						else
						{
							ScaleWorld(ClonedActor, Scale);
						}


						// Add duplicated actor to cloned array
						ObjectTransforms::ClonedActors.Add(ClonedActor);

						// Set the name of the cloned actor to the original
						ClonedActor->SetActorLabel(LevelActor->GetActorLabel());
						NamingVector[i].push_back(ClonedActor);
					}
				}

				// If enabled, select the duplicated actors
				if (DuplicationOptions::GetSelectDuplicated())
				{
					// Clear selection
					GEditor->SelectNone(true, true);

					// Iterate through all duplicated actors and add them to selection
					for (auto Iter = ObjectTransforms::ClonedActors.CreateIterator(); Iter; ++Iter)
					{
						GEditor->SelectActor(*Iter, true, true, true, true);
					}
				}
			}

			// Append numbers to the duplicated actors' labels so they're not all the same name
			for (int i = 0; i < NamingVector.size(); i++)
			{
				for (int j = 0; j < NamingVector[i].size(); j++)
				{
					// Increase number at the end of every actor's name by i in each vector
					NamingVector[i][j]->SetActorLabel(GetIncrementedNumberLabel(NamingVector[i][j]->GetActorLabel(), i));
				}
			}


			// Close transaction
			GEditor->EndTransaction();

			return FReply::Handled();
		}

		static TSharedRef<SWidget> MakeButton(FText InLabel)
		{
			return SNew(SButton)
				.Text(InLabel)
				.OnClicked_Static(&Locals::OnButtonClick);
		}
	};

	ChildSlot.VAlign(VAlign_Fill).HAlign(HAlign_Fill)
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.Padding(15, 12, 0, 12)

	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			DetailsView.ToSharedRef()
		]

	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SAssignNew(ToolkitWidget, SBorder)
			.HAlign(HAlign_Center)
		.Padding(5)
		.IsEnabled_Static(&Locals::IsWidgetEnabled)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Center)
		.Padding(2.5)
		[
			SNew(STextBlock)
			.AutoWrapText(true)
		.Text(LOCTEXT("DuplicateSpecial_Tip", "Duplicate all currently selected actors with the chosen settings."))
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Center)
		.AutoHeight()
		[
			Locals::MakeButton(LOCTEXT("DuplicateButton", "Duplicate"))
		]
		]
		]
		]
		]
		]]]]]]]];
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

bool SDuplicateSpecialTools::ShouldShowPropertyOnDetailCustomization(const FPropertyAndParent & InPropertyAndParent) const
{
	return true;
}

bool SDuplicateSpecialTools::IsReadOnlyPropertyOnDetailCustomization(const FPropertyAndParent & InPropertyAndParent) const
{
	return false;
}

void SDuplicateSpecialTools::SetDetailsObjects(const TArray<TWeakObjectPtr<>>& InObjects)
{
	DetailsView->SetObjects(InObjects);
}

#undef LOCTEXT_NAMESPACE