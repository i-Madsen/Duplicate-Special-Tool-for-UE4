// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EdMode.h"

class UDuplicateSpecialSettings;

class FDuplicateSpecialEdMode : public FEdMode
{
public:
	const static FEditorModeID EM_DuplicateSpecialModeId;
public:
	FDuplicateSpecialEdMode();
	virtual ~FDuplicateSpecialEdMode();

	/** Set the objects to be displayed in the details panel */
	void SetObjects(const TArray<TWeakObjectPtr<>>& InSelectedObjects, const TArray<FGuid>& InObjectBindings);

	// FEdMode interface
	virtual void Enter() override;
	virtual void Exit() override;
	//virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;
	//virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
	//virtual void ActorSelectionChangeNotify() override;
	bool UsesToolkits() const override;
	// End of FEdMode interface

	/** Refresh our internal object list (they may have changed) */
	void RefreshObjects();

	/** Get the settings we are using */
	const UDuplicateSpecialSettings* GetSettings() { return Settings; }

private:
	void SetObjects_Internal();

private:
	/** Settings object used to insert controls into the details panel */
	UDuplicateSpecialSettings * Settings;
};
