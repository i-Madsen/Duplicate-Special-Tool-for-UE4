// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "DuplicateSpecialSettings.h"

class IDetailsView;

class SDuplicateSpecialTools : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SDuplicateSpecialTools) {}
	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs);

	/** Set the objects to be displayed in the details panel */
	void SetDetailsObjects(const TArray<TWeakObjectPtr<>>& InObjects);

private:
	TSharedPtr<SWidget> ToolkitWidget;

	/** The details view we do most of our work within */
	TSharedPtr<IDetailsView> DetailsView;

	/** Display set up for property */
	bool ShouldShowPropertyOnDetailCustomization(const struct FPropertyAndParent& InPropertyAndParent) const;
	bool IsReadOnlyPropertyOnDetailCustomization(const struct FPropertyAndParent& InPropertyAndParent) const;

private:
	/** Settings object used to insert controls into the details panel */
	UDuplicateSpecialSettings* Settings;
};