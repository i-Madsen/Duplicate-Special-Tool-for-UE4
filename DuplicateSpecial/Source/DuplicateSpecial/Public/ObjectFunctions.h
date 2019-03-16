// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/BaseToolkit.h"
#include "DuplicateSpecialSettings.h"

/*
Stores all of the transform values and the booleans associated with them
dictating whether to use them based on local or world space.

Get and Set functions are defined for these variables.
*/
namespace ObjectTransforms {

	static TArray<AActor*> ClonedActors;

	static float locX = 0;
	static float locY = 0;
	static float locZ = 0;
	static float rotX = 0;
	static float rotY = 0;
	static float rotZ = 0;
	static float scaleX = 0;
	static float scaleY = 0;
	static float scaleZ = 0;

	static bool transRel = true;
	static bool rotateRel = true;
	static bool scaleRel = true;
	static bool selectDuplicated = true;

	static UDuplicateSpecialSettings* SettingsRef;

	// Set and Get functions for transform varaibles
	void SetLocationX(float inputVar)
	{
		ObjectTransforms::locX = inputVar;
	}

	float GetLocationX()
	{
		locX = SettingsRef->GetTranslateX();
		return locX;
	}

	void SetLocationY(float inputVar)
	{
		ObjectTransforms::locY = inputVar;
	}

	float GetLocationY()
	{
		locY = SettingsRef->GetTranslateY();
		return locY;
	}

	void SetLocationZ(float inputVar)
	{
		ObjectTransforms::locZ = inputVar;
	}

	float GetLocationZ()
	{
		locZ = SettingsRef->GetTranslateZ();
		return locZ;
	}

	void SetRotationX(float inputVar)
	{
		ObjectTransforms::rotX = inputVar;
	}

	float GetRotationX()
	{
		rotX = SettingsRef->GetRotationX();
		return rotX;
	}

	void SetRotationY(float inputVar)
	{
		ObjectTransforms::rotY = inputVar;
	}

	float GetRotationY()
	{
		rotY = SettingsRef->GetRotationY();
		return rotY;
	}

	void SetRotationZ(float inputVar)
	{
		ObjectTransforms::rotZ = inputVar;
	}

	float GetRotationZ()
	{
		rotZ = SettingsRef->GetRotationZ();
		return rotZ;
	}

	void SetScaleX(float inputVar)
	{
		ObjectTransforms::scaleX = inputVar;
	}

	float GetScaleX()
	{
		scaleX = SettingsRef->GetScaleX();
		return scaleX;
	}

	void SetScaleY(float inputVar)
	{
		ObjectTransforms::scaleY = inputVar;
	}

	float GetScaleY()
	{
		scaleY = SettingsRef->GetScaleY();
		return scaleY;
	}

	void SetScaleZ(float inputVar)
	{
		ObjectTransforms::scaleZ = inputVar;
	}

	float GetScaleZ()
	{
		scaleZ = SettingsRef->GetScaleZ();
		return scaleZ;
	}


	void SetTransRel(bool inputBool)
	{
		ObjectTransforms::transRel = inputBool;
	}

	bool GetTransRel()
	{
		transRel = SettingsRef->GetBTranslateRelative();
		return transRel;
	}

	void SetRotateRel(bool inputBool)
	{
		ObjectTransforms::rotateRel = inputBool;
	}

	bool GetRotateRel()
	{
		rotateRel = SettingsRef->GetBRotateRelative();
		return rotateRel;
	}

	void SetScaleRel(bool inputBool)
	{
		ObjectTransforms::scaleRel = inputBool;
	}

	bool GetScaleRel()
	{
		scaleRel = SettingsRef->GetBScaleRelative();
		return scaleRel;
	}

	void SetSelectDuplicated(bool inputBool)
	{
		ObjectTransforms::selectDuplicated = inputBool;
	}

	bool GetSelectDuplicated()
	{
		selectDuplicated = SettingsRef->GetBSelectDuplicated();
		return selectDuplicated;
	}
}

static AActor* CloneActor(AActor* InputActor);
static void TransformRelative(AActor* InputActor, FVector LocationOffset, FRotator RotationOffset, FVector ScaleAmount);
static void TranslateRelative(AActor* InputActor, FVector LocationOffset);
static void RotateRelative(AActor* InputActor, FRotator RotationOffset);
static void ScaleRelative(AActor* InputActor, FVector ScaleAmount);
static void TranslateWorld(AActor* InputActor, FVector LocationOffset);
static void RotateWorld(AActor* InputActor, FRotator RotationOffset);
static void ScaleWorld(AActor* InputActor, FVector ScaleAmount);