// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#include "DuplicateSpecialEdModeToolkit.h"
#include "DuplicateSpecialEdMode.h"
#include "Engine/Selection.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "EditorModeManager.h"
#include "Engine/World.h"
#include "ObjectFunctions.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/UMGStyle.h"
#include "Runtime/UMG/Public/Slate/SObjectWidget.h"
#include "Runtime/UMG/Public/IUMGModule.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "InputCore.h"
#include "Slate.h"
#include "SlateCore.h"
//#include "SNumericEntryBox.h"


#define LOCTEXT_NAMESPACE "FDuplicateSpecialEdModeToolkit"

FDuplicateSpecialEdModeToolkit::FDuplicateSpecialEdModeToolkit()
{
	SAssignNew(ModeTools, SDuplicateSpecialTools);
}

void FDuplicateSpecialEdModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost)
{
	FModeToolkit::Init(InitToolkitHost);
}

FName FDuplicateSpecialEdModeToolkit::GetToolkitFName() const
{
	return FName("DuplicateSpecialEdMode");
}

FText FDuplicateSpecialEdModeToolkit::GetBaseToolkitName() const
{
	return NSLOCTEXT("FDuplicateSpecialEdModeToolkit", "DisplayName", "DuplicateSpecialEdMode Tool");
}

class FEdMode* FDuplicateSpecialEdModeToolkit::GetEditorMode() const
{
	return GLevelEditorModeTools().GetActiveMode(FDuplicateSpecialEdMode::EM_DuplicateSpecialModeId);
}

TSharedPtr<class SWidget> FDuplicateSpecialEdModeToolkit::GetInlineContent() const
{
	return ModeTools;
}

#undef LOCTEXT_NAMESPACE