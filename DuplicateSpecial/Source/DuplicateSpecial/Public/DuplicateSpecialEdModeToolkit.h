// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/BaseToolkit.h"
#include "SDuplicateSpecialTools.h"

class FDuplicateSpecialEdModeToolkit : public FModeToolkit
{
public:

	FDuplicateSpecialEdModeToolkit();

	/** FModeToolkit interface */
	virtual void Init(const TSharedPtr<IToolkitHost>& InitToolkitHost) override;

	/** IToolkit interface */
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual class FEdMode* GetEditorMode() const override;
	virtual TSharedPtr<class SWidget> GetInlineContent() const override;

private:

	TSharedPtr<SWidget> ToolkitWidget;

	TSharedPtr<SDuplicateSpecialTools> ModeTools;
};

#pragma once