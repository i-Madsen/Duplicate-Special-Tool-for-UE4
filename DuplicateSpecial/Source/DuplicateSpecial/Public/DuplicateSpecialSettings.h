// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DuplicateSpecialSettings.generated.h"

UCLASS()
class UDuplicateSpecialSettings : public UObject
{
	GENERATED_BODY()


public:
	// UObject interface
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	UDuplicateSpecialSettings(const FObjectInitializer& ObjectInitializer);
	~UDuplicateSpecialSettings();

	FVector GetTranslate() const { return Translate; }
	FRotator GetRotation() const { return Rotation; }
	FVector GetScale() const { return Scale; }
	void SetTranslate(FVector InputVar);
	void SetRotation(FRotator InputVar);
	void SetScale(FVector InputVar);

	bool GetBTranslateRelative() const { return bTranslateRelative; }
	bool GetBRotateRelative() const { return bRotateRelative; }
	bool GetBScaleRelative() const { return bScaleRelative; }

	bool GetBSelectDuplicated() const { return bSelectDuplicated; }
	bool GetBCreateNewOutlinerFolder() const { return bCreateNewOutlinerFolder; }
	FName GetFolderPathName() const { return FolderPathName; }
	bool GetBAttachToParent() const { return bAttachToParent; }

	int GetNumberOfCopies() const { return NumberOfCopies; }
	void SetNumberOfCopies(int InTimes);

protected:
	/** If true, uses AddActorLocalOffset(). If false, uses AddActorWorldOffset(). */
	UPROPERTY(EditAnywhere, Category = "Transforms", meta = (DisplayName = "Relative Translation"))
		bool bTranslateRelative;
	UPROPERTY(EditAnywhere, Category = "Transforms")
		FVector Translate;
	/** If true, uses AddActorLocalRotation(). If false, uses AddActorWorldRotation(). */
	UPROPERTY(EditAnywhere, Category = "Transforms", meta = (DisplayName = "Relative Rotation"))
		bool bRotateRelative;
	UPROPERTY(EditAnywhere, Category = "Transforms")
		FRotator Rotation;
	/** If true, multiplies the actor's relative scale. If false, sets the actor's scale. */
	UPROPERTY(EditAnywhere, Category = "Transforms", meta = (DisplayName = "Relative Scale"))
		bool bScaleRelative;
	UPROPERTY(EditAnywhere, Category = "Transforms")
		FVector Scale;

	/** If true, selection is set to the duplicate actors at the end of the duplication process. */
	UPROPERTY(EditAnywhere, Category = "Duplication Options", meta = (DisplayName = "Select Duplicated Actors"))
		bool bSelectDuplicated;
	/** If true, duplicate actors are placed under the new folder. */
	UPROPERTY(EditAnywhere, Category = "Duplication Options", meta = (DisplayName = "Create New Outliner Folder"))
		bool bCreateNewOutlinerFolder;
	/** Creates new folders for the given path name in the outliner. If part of the path already exists, places duplicate actors under the existing folder. */
	UPROPERTY(EditAnywhere, Category = "Duplication Options", meta = (EditCondition = "bCreateNewOutlinerFolder"))
		FName FolderPathName;
	/** Attaches duplicates to the actor(s) they were duplicated from with wielded simulated bodies. */
	UPROPERTY(EditAnywhere, Category = "Duplication Options", meta = (DisplayName = "Attach to Parent"))
		bool bAttachToParent;
	/** How many times to run the duplication process. Typically should be used with Select Duplicated set to true. */
	UPROPERTY(EditAnywhere, Category = "Duplication Options")
		int NumberOfCopies;

public:
	/** Min and Max FloatFoo range retrieved from config */
	float boxMin;
	float boxMax;

};
