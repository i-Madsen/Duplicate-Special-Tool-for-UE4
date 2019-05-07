// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#pragma once

#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"

class FDuplicateSpecialStyle
	: public FSlateStyleSet
{
public:
	FDuplicateSpecialStyle()
		: FSlateStyleSet("DuplicateSpecialStyle")
	{
		const FVector2D Icon16x16(16.0f, 16.0f);
		const FVector2D Icon20x20(20.0f, 20.0f);
		const FVector2D Icon24x24(24.0f, 24.0f);
		const FVector2D Icon40x40(40.0f, 40.0f);
		SetContentRoot(IPluginManager::Get().FindPlugin("DuplicateSpecial")->GetBaseDir() / TEXT("Resources"));

		Set("DuplicateSpecialMode", new FSlateImageBrush(RootToContentDir(TEXT("Icon128.png")), Icon40x40));
		Set("DuplicateSpecialMode.Small", new FSlateImageBrush(RootToContentDir(TEXT("Icon128.png")), Icon20x20));

		FSlateStyleRegistry::RegisterSlateStyle(*this);
	}

	static FDuplicateSpecialStyle& Get()
	{
		static FDuplicateSpecialStyle Inst;
		return Inst;
	}

	~FDuplicateSpecialStyle()
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*this);
	}
};