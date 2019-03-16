// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#include "DuplicateSpecialSettings.h"
//#include "UnrealType.h"

UDuplicateSpecialSettings::UDuplicateSpecialSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer),
	bTranslateRelative(true),
	TranslateX(10.0f),
	TranslateY(10.0f),
	TranslateZ(10.0f),
	bRotateRelative(true),
	RotationX(0.0f),
	RotationY(0.0f),
	RotationZ(0.0f),
	bScaleRelative(true),
	ScaleX(1.0f),
	ScaleY(1.0f),
	ScaleZ(1.0f),
	bSelectDuplicated(true)
	//EnumDataExample(EDuplicateSpecialEnumDataExample::Foo)
{
	//const float TranslateXClampMin = 1.0f, TranslateXClampMax = 4096.0f;

	boxMin = -3E+38f;
	boxMax = 3E+38;

}

UDuplicateSpecialSettings::~UDuplicateSpecialSettings()
{
}

// Set methods for transforms
void UDuplicateSpecialSettings::SetTranslateX(float InRadius)
{
	TranslateX = (float)FMath::Clamp(InRadius, boxMin, boxMax);
}

void UDuplicateSpecialSettings::SetTranslateY(float InRadius)
{
	TranslateY = (float)FMath::Clamp(InRadius, boxMin, boxMax);
}

void UDuplicateSpecialSettings::SetTranslateZ(float InRadius)
{
	TranslateZ = (float)FMath::Clamp(InRadius, boxMin, boxMax);
}

void UDuplicateSpecialSettings::SetRotationX(float InRadius)
{
	RotationX = (float)FMath::Clamp(InRadius, boxMin, boxMax);
}

void UDuplicateSpecialSettings::SetRotationY(float InRadius)
{
	RotationY = (float)FMath::Clamp(InRadius, boxMin, boxMax);
}

void UDuplicateSpecialSettings::SetRotationZ(float InRadius)
{
	RotationZ = (float)FMath::Clamp(InRadius, boxMin, boxMax);
}

void UDuplicateSpecialSettings::SetScaleX(float InRadius)
{
	ScaleX = (float)FMath::Clamp(InRadius, boxMin, boxMax);
}

void UDuplicateSpecialSettings::SetScaleY(float InRadius)
{
	ScaleY = (float)FMath::Clamp(InRadius, boxMin, boxMax);
}

void UDuplicateSpecialSettings::SetScaleZ(float InRadius)
{
	ScaleZ = (float)FMath::Clamp(InRadius, boxMin, boxMax);
}

// Update the values of the transform variables on change
void UDuplicateSpecialSettings::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UDuplicateSpecialSettings, TranslateX))
	{
		TranslateX = (float)FMath::Clamp(TranslateX, boxMin, boxMax);
	} else if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UDuplicateSpecialSettings, TranslateY))
	{
		TranslateY = (float)FMath::Clamp(TranslateY, boxMin, boxMax);
	} else if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UDuplicateSpecialSettings, TranslateZ))
	{
		TranslateZ = (float)FMath::Clamp(TranslateZ, boxMin, boxMax);
	} else if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UDuplicateSpecialSettings, RotationX))
	{
		RotationX = (float)FMath::Clamp(RotationX, boxMin, boxMax);
	} else if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UDuplicateSpecialSettings, RotationY))
	{
		RotationY = (float)FMath::Clamp(RotationY, boxMin, boxMax);
	} else if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UDuplicateSpecialSettings, RotationZ))
	{
		RotationZ = (float)FMath::Clamp(RotationZ, boxMin, boxMax);
	} else if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UDuplicateSpecialSettings, ScaleX))
	{
		ScaleX = (float)FMath::Clamp(ScaleX, boxMin, boxMax);
	} else if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UDuplicateSpecialSettings, ScaleY))
	{
		ScaleY = (float)FMath::Clamp(ScaleY, boxMin, boxMax);
	} else if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UDuplicateSpecialSettings, ScaleZ))
	{
		ScaleZ = (float)FMath::Clamp(ScaleZ, boxMin, boxMax);
	}
}

