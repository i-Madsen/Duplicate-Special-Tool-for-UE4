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
//#include "SScrollBox.h"
#include "DuplicateSpecialSettings.h"
#include "Engine/World.h"
#include "Slate.h"
#include "SlateOptMacros.h"
#include "ObjectFunctions.h"
//#include "Array.h"

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
		DetailsViewArgs.bShowScrollBar = false; // Don't need to show this, as we are putting it in a scroll box
	}

	// Set up details view
	DetailsView = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor").CreateDetailView(DetailsViewArgs);
	DetailsView->SetIsPropertyVisibleDelegate(FIsPropertyVisible::CreateSP(this, &SDuplicateSpecialTools::ShouldShowPropertyOnDetailCustomization));
	DetailsView->SetIsPropertyReadOnlyDelegate(FIsPropertyReadOnly::CreateSP(this, &SDuplicateSpecialTools::IsReadOnlyPropertyOnDetailCustomization));

	// Get a reference to Settings
	UDuplicateSpecialSettings* Settings = NewObject<UDuplicateSpecialSettings>(GetTransientPackage(), *LOCTEXT("SettingsName", "DuplicateSpecialEdMode Settings").ToString());
	ObjectTransforms::SettingsRef = Settings;


	struct Locals
	{
		static bool IsWidgetEnabled()
		{
			return GEditor->GetSelectedActors()->Num() != 0;
		}

		static FReply OnButtonClick(FVector InOffset)
		{
			// Get current selected actors and clear cloned list
			USelection* SelectedActors = GEditor->GetSelectedActors();
			ObjectTransforms::ClonedActors.Empty();

			// Let editor know that we're about to do something that we want to undo/redo
			GEditor->BeginTransaction(LOCTEXT("MoveActorsTransactionName", "MoveActors"));

			// For each selected actor
			for (FSelectionIterator Iter(*SelectedActors); Iter; ++Iter)
			{
				if (AActor* LevelActor = Cast<AActor>(*Iter))
				{
					// Register actor in opened transaction (undo/redo)
					LevelActor->Modify();
					
					// Get the input Location, Rotation, and Scale
					FVector Location(ObjectTransforms::GetLocationX(), ObjectTransforms::GetLocationY(), ObjectTransforms::GetLocationZ());
					FRotator Rotation(ObjectTransforms::GetRotationX(), ObjectTransforms::GetRotationY(), ObjectTransforms::GetRotationZ());
					FVector Scale(ObjectTransforms::GetScaleX(), ObjectTransforms::GetScaleY(), ObjectTransforms::GetScaleZ());

					// Duplicate the actor
					AActor* ClonedActor = CloneActor(LevelActor);
					
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
						ScaleRelative(ClonedActor, Scale);
					}
					else
					{
						ScaleWorld(ClonedActor, Scale);
					}
					
					// Add duplicated actor to cloned array
					ObjectTransforms::ClonedActors.Add(ClonedActor);
				}
			}

			// We're done moving actors so close transaction
			GEditor->EndTransaction();

			// If enabled, select the duplicated actors
			if (ObjectTransforms::GetSelectDuplicated())
			{
				// Clear selection
				GEditor->SelectNone(true, true);

				// Iterate through all duplicated actors and add them to selection
				for (auto Iter = ObjectTransforms::ClonedActors.CreateIterator(); Iter; ++Iter)
				{
					GEditor->SelectActor(*Iter, true, true, true, true);
				}
			}

			return FReply::Handled();
		}

		static TSharedRef<SWidget> MakeButton(FText InLabel, const FVector InOffset)
		{
			return SNew(SButton)
				.Text(InLabel)
				.OnClicked_Static(&Locals::OnButtonClick, InOffset);
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
		[
			SNew(STextBlock)
			.Text(LOCTEXT("DuplicateSpecial_Tip", "You can choose the TranslateX of movement."))
		]

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
		.Padding(25)
		.IsEnabled_Static(&Locals::IsWidgetEnabled)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Center)
		.Padding(50)
		[
			SNew(STextBlock)
			.AutoWrapText(true)
		.Text(LOCTEXT("HelperLabel", "Select some actors and move them around using buttons below test"))
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Center)
		.AutoHeight()
		[
			Locals::MakeButton(LOCTEXT("UpButtonLabel", "Up"), FVector(0, 0, ObjectTransforms::GetLocationX()))
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Center)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			Locals::MakeButton(LOCTEXT("LeftButtonLabel", "Left"), FVector(0, -ObjectTransforms::GetLocationX(), 0))
		]
	+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			Locals::MakeButton(LOCTEXT("RightButtonLabel", "Right"), FVector(0, ObjectTransforms::GetLocationX(), 0))
		]
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Center)
		.AutoHeight()
		[
			Locals::MakeButton(LOCTEXT("DownButtonLabel", "Down"), FVector(0, 0, -ObjectTransforms::GetLocationX()))
		]
		]
		]
		]
		]
		]]]]]]]]]]];
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