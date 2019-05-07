// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#include "DuplicateSpecialSettings.h"

UDuplicateSpecialSettings::UDuplicateSpecialSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer),
	bTranslateRelative(true),
	Translate(0.0f),
	bRotateRelative(true),
	Rotation(0.0f),
	bScaleRelative(true),
	Scale(1.0f),
	bSelectDuplicated(true),
	bCreateNewOutlinerFolder(false),
	FolderPathName("MyNewFolder/MyNewSubFolder"),
	bAttachToParent(false),
	NumberOfCopies(1)

{

	boxMin = -100000.0f;
	boxMax = 100000.0f;

}

UDuplicateSpecialSettings::~UDuplicateSpecialSettings()
{
}

// Set methods for transforms
void UDuplicateSpecialSettings::SetTranslate(FVector InputVar)
{
	Translate = InputVar.BoundToBox(FVector(boxMin), FVector(boxMax));
}

void UDuplicateSpecialSettings::SetRotation(FRotator InputVar)
{
	Rotation.Roll = (float)FMath::Clamp(InputVar.Roll, boxMin, boxMax);
	Rotation.Pitch = (float)FMath::Clamp(InputVar.Pitch, boxMin, boxMax);
	Rotation.Yaw = (float)FMath::Clamp(InputVar.Yaw, boxMin, boxMax);
}

void UDuplicateSpecialSettings::SetScale(FVector InputVar)
{
	Scale = InputVar.BoundToBox(FVector(boxMin), FVector(boxMax));
}

void UDuplicateSpecialSettings::SetNumberOfCopies(int InTimes)
{
	NumberOfCopies = (int)FMath::Clamp(InTimes, 1, 100000);
}

// Update the values of the transform variables on change
void UDuplicateSpecialSettings::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property && ( PropertyChangedEvent.Property->GetFName() == FName(TEXT("X")) || 
										   PropertyChangedEvent.Property->GetFName() == FName(TEXT("Y")) ||
										   PropertyChangedEvent.Property->GetFName() == FName(TEXT("Z")) ) )
	{

			SetTranslate(Translate);
			SetScale(Scale);

	} else if (PropertyChangedEvent.Property && ( PropertyChangedEvent.Property->GetFName() == FName(TEXT("Roll"))  ||
												  PropertyChangedEvent.Property->GetFName() == FName(TEXT("Pitch")) ||
												  PropertyChangedEvent.Property->GetFName() == FName(TEXT("Yaw"))   ) )
	{

		SetRotation(Rotation);

	} else if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UDuplicateSpecialSettings, NumberOfCopies))
	{
		NumberOfCopies = (int)FMath::Clamp(NumberOfCopies, 1, 100000);
	}
}

