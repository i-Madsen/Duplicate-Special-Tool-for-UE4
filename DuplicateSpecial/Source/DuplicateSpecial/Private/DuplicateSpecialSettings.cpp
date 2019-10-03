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
	Load();
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
	if (PropertyChangedEvent.Property && (PropertyChangedEvent.Property->GetFName() == FName(TEXT("X")) ||
		PropertyChangedEvent.Property->GetFName() == FName(TEXT("Y")) ||
		PropertyChangedEvent.Property->GetFName() == FName(TEXT("Z"))))
	{

		SetTranslate(Translate);
		SetScale(Scale);

	}
	else if (PropertyChangedEvent.Property && (PropertyChangedEvent.Property->GetFName() == FName(TEXT("Roll")) ||
		PropertyChangedEvent.Property->GetFName() == FName(TEXT("Pitch")) ||
		PropertyChangedEvent.Property->GetFName() == FName(TEXT("Yaw"))))
	{

		SetRotation(Rotation);

	}
	else if (PropertyChangedEvent.Property && PropertyChangedEvent.Property->GetFName() == GET_MEMBER_NAME_CHECKED(UDuplicateSpecialSettings, NumberOfCopies))
	{
		NumberOfCopies = (int)FMath::Clamp(NumberOfCopies, 1, 100000);
	}
}



/** Load UI settings from ini file */
void UDuplicateSpecialSettings::Load()
{
	GConfig->GetBool(TEXT("DuplicateSpecial"), TEXT("bTranslateRelative"), bTranslateRelative, GEditorPerProjectIni);
	GConfig->GetVector(TEXT("DuplicateSpecial"), TEXT("Translate"), Translate, GEditorPerProjectIni);
	GConfig->GetBool(TEXT("DuplicateSpecial"), TEXT("bRotateRelative"), bRotateRelative, GEditorPerProjectIni);
	GConfig->GetRotator(TEXT("DuplicateSpecial"), TEXT("Rotation"), Rotation, GEditorPerProjectIni);
	GConfig->GetBool(TEXT("DuplicateSpecial"), TEXT("bScaleRelative"), bScaleRelative, GEditorPerProjectIni);
	GConfig->GetVector(TEXT("DuplicateSpecial"), TEXT("Scale"), Scale, GEditorPerProjectIni);
	GConfig->GetBool(TEXT("DuplicateSpecial"), TEXT("bSelectDuplicated"), bSelectDuplicated, GEditorPerProjectIni);
	GConfig->GetBool(TEXT("DuplicateSpecial"), TEXT("bCreateNewOutlinerFolder"), bCreateNewOutlinerFolder, GEditorPerProjectIni);
	FString FolderPathString;
	GConfig->GetString(TEXT("DuplicateSpecial"), TEXT("FolderPathName"), FolderPathString, GEditorPerProjectIni);
	FolderPathName = FName(*FolderPathString);
	GConfig->GetBool(TEXT("DuplicateSpecial"), TEXT("bAttachToParent"), bAttachToParent, GEditorPerProjectIni);
	GConfig->GetInt(TEXT("DuplicateSpecial"), TEXT("NumberOfCopies"), NumberOfCopies, GEditorPerProjectIni);
}

/** Save UI settings to ini file */
void UDuplicateSpecialSettings::Save()
{
	GConfig->SetBool(TEXT("DuplicateSpecial"), TEXT("bTranslateRelative"), bTranslateRelative, GEditorPerProjectIni);
	GConfig->SetVector(TEXT("DuplicateSpecial"), TEXT("Translate"), Translate, GEditorPerProjectIni);
	GConfig->SetBool(TEXT("DuplicateSpecial"), TEXT("bRotateRelative"), bRotateRelative, GEditorPerProjectIni);
	GConfig->SetRotator(TEXT("DuplicateSpecial"), TEXT("Rotation"), Rotation, GEditorPerProjectIni);
	GConfig->SetBool(TEXT("DuplicateSpecial"), TEXT("bScaleRelative"), bScaleRelative, GEditorPerProjectIni);
	GConfig->SetVector(TEXT("DuplicateSpecial"), TEXT("Scale"), Scale, GEditorPerProjectIni);
	GConfig->SetBool(TEXT("DuplicateSpecial"), TEXT("bSelectDuplicated"), bSelectDuplicated, GEditorPerProjectIni);
	GConfig->SetBool(TEXT("DuplicateSpecial"), TEXT("bCreateNewOutlinerFolder"), bCreateNewOutlinerFolder, GEditorPerProjectIni);
	GConfig->SetString(TEXT("DuplicateSpecial"), TEXT("FolderPathName"), *(FolderPathName.ToString()), GEditorPerProjectIni);
	GConfig->SetBool(TEXT("DuplicateSpecial"), TEXT("bAttachToParent"), bAttachToParent, GEditorPerProjectIni);
	GConfig->SetInt(TEXT("DuplicateSpecial"), TEXT("NumberOfCopies"), NumberOfCopies, GEditorPerProjectIni);

	GConfig->Flush(false, GEditorPerProjectIni);
}

