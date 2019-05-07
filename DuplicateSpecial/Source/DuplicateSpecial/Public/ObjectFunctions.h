// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/BaseToolkit.h"
#include "DuplicateSpecialSettings.h"

/*
Stores all of the duplication options, the transform values, and the booleans associated with transform options
dictating whether to use them based on local or world space.

Get and Set functions are defined for these variables.
*/

namespace DuplicationOptions {


	static bool selectDuplicated = true;
	static bool createNewOutlinerFolder = false;
	static FName folderPathName = "e.g. MyNewFolder/Objects";
	static bool attachToParent = false;
	static int numberOfCopies = 1;

	static UDuplicateSpecialSettings* SettingsRef;

	void SetSelectDuplicated(bool inputBool)
	{
		DuplicationOptions::selectDuplicated = inputBool;
	}

	bool GetSelectDuplicated()
	{
		selectDuplicated = SettingsRef->GetBSelectDuplicated();
		return selectDuplicated;
	}

	void SetCreateNewOutlinerFolder(bool inputBool)
	{
		DuplicationOptions::createNewOutlinerFolder = inputBool;
	}

	bool GetCreateNewOutlinerFolder()
	{
		createNewOutlinerFolder = SettingsRef->GetBCreateNewOutlinerFolder();
		return createNewOutlinerFolder;
	}

	void SetFolderPathName(FName inputText)
	{
		DuplicationOptions::folderPathName = inputText;
	}

	FName GetFolderPathName()
	{
		folderPathName = SettingsRef->GetFolderPathName();
		return folderPathName;
	}

	void SetAttachToParent(bool inputBool)
	{
		DuplicationOptions::attachToParent = inputBool;
	}

	bool GetAttachToParent()
	{
		attachToParent = SettingsRef->GetBAttachToParent();
		return attachToParent;
	}


	void SetNumberOfCopies(int InputVar)
	{
		DuplicationOptions::numberOfCopies = InputVar;
	}

	float GetNumberOfCopies()
	{
		numberOfCopies = SettingsRef->GetNumberOfCopies();
		return numberOfCopies;
	}


}


namespace ObjectTransforms {

	static TArray<AActor*> ClonedActors;

	static FVector loc = FVector(0);
	static FRotator rot = FRotator(0);
	static FVector scale = FVector(0);

	static bool transRel = true;
	static bool rotateRel = true;
	static bool scaleRel = true;

	// Set and Get functions for transform variables
	void SetLocation(FVector InputVar)
	{
		ObjectTransforms::loc = InputVar;
	}

	FVector GetLocation()
	{
		loc = DuplicationOptions::SettingsRef->GetTranslate();
		return loc;
	}

	void SetRotation(FRotator InputVar)
	{
		ObjectTransforms::rot = InputVar;
	}

	FRotator GetRotation()
	{
		rot = DuplicationOptions::SettingsRef->GetRotation();
		return rot;
	}

	void SetScale(FVector InputVar)
	{
		ObjectTransforms::scale = InputVar;
	}

	FVector GetScale()
	{
		scale = DuplicationOptions::SettingsRef->GetScale();
		return scale;
	}


	void SetTransRel(bool inputBool)
	{
		ObjectTransforms::transRel = inputBool;
	}

	bool GetTransRel()
	{
		transRel = DuplicationOptions::SettingsRef->GetBTranslateRelative();
		return transRel;
	}

	void SetRotateRel(bool inputBool)
	{
		ObjectTransforms::rotateRel = inputBool;
	}

	bool GetRotateRel()
	{
		rotateRel = DuplicationOptions::SettingsRef->GetBRotateRelative();
		return rotateRel;
	}

	void SetScaleRel(bool inputBool)
	{
		ObjectTransforms::scaleRel = inputBool;
	}

	bool GetScaleRel()
	{
		scaleRel = DuplicationOptions::SettingsRef->GetBScaleRelative();
		return scaleRel;
	}

}


static AActor* CloneActor(AActor* InputActor);
static void TransformRelative(AActor* InputActor, FVector LocationOffset, FRotator RotationOffset, FVector ScaleAmount);
static void TranslateRelative(AActor* InputActor, FVector LocationOffset);
static void RotateRelative(AActor* InputActor, FRotator RotationOffset);
static void ScaleRelative(AActor* InputActor, FVector ScaleAmount, FVector BaseScale);
static void TranslateWorld(AActor* InputActor, FVector LocationOffset);
static void RotateWorld(AActor* InputActor, FRotator RotationOffset);
static void ScaleWorld(AActor* InputActor, FVector ScaleAmount);
static AActor* GetHighestAttachedParent(AActor* InputActor);
static FString GetIncrementedNumberLabel(FString ActorLabel, int incrementBy);