// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#include "DuplicateSpecial.h"
#include "DuplicateSpecialEdMode.h"
#include "DuplicateSpecialStyle.h"

#define LOCTEXT_NAMESPACE "FDuplicateSpecialModule"

void FDuplicateSpecialModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FDuplicateSpecialEdMode>(
		FDuplicateSpecialEdMode::EM_DuplicateSpecialModeId,
		LOCTEXT("DuplicateSpecialModeName", "Duplicate Special"),
		FSlateIcon(FDuplicateSpecialStyle::Get().GetStyleSetName(), "DuplicateSpecialMode", "DuplicateSpecialMode.Small"),
		true);
}

void FDuplicateSpecialModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FDuplicateSpecialEdMode::EM_DuplicateSpecialModeId);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDuplicateSpecialModule, DuplicateSpecial)