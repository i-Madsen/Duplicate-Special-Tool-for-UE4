// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#include "DuplicateSpecialEdMode.h"
#include "DuplicateSpecialEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "SDuplicateSpecialTools.h"
#include "DuplicateSpecialSettings.h"
#include "EditorModeManager.h"
#include "DuplicateSpecial.h"

const FEditorModeID FDuplicateSpecialEdMode::EM_DuplicateSpecialModeId = TEXT("EM_DuplicateSpecialEdMode");

#define LOCTEXT_NAMESPACE "DuplicateSpecialEdMode"

FDuplicateSpecialEdMode::FDuplicateSpecialEdMode()
{
	Settings = NewObject<UDuplicateSpecialSettings>(GetTransientPackage(), *LOCTEXT("SettingsName", "DuplicateSpecialEdMode Settings").ToString());
	Settings->AddToRoot();
}

FDuplicateSpecialEdMode::~FDuplicateSpecialEdMode()
{
	Settings->RemoveFromRoot();
}

void FDuplicateSpecialEdMode::SetObjects(const TArray<TWeakObjectPtr<>>& InSelectedObjects, const TArray<FGuid>& InObjectBindings)
{
	check(InSelectedObjects.Num() == InObjectBindings.Num());

	SetObjects_Internal();
}

void FDuplicateSpecialEdMode::SetObjects_Internal()
{
	TArray<TWeakObjectPtr<>> SelectedObjects;
	SelectedObjects.Insert(Settings, 0);

	StaticCastSharedPtr<SDuplicateSpecialTools>(Toolkit->GetInlineContent())->SetDetailsObjects(SelectedObjects);
}

void FDuplicateSpecialEdMode::Enter()
{
	// Call parent implementation
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FDuplicateSpecialEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}

	SetObjects_Internal();
}

void FDuplicateSpecialEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FDuplicateSpecialEdMode::UsesToolkits() const
{
	return true;
}

void FDuplicateSpecialEdMode::RefreshObjects()
{
	SetObjects_Internal();
}

#undef LOCTEXT_NAMESPACE