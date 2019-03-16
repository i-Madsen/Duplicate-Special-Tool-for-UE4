// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "DuplicateSpecialSettings.generated.h"

UENUM()
enum class EDuplicateSpecialEnumDataExample : uint8
{
	Foo		UMETA(DisplayName = "Foo"),
	Bar		UMETA(DisplayName = "Bar"),
	Foobar	UMETA(DisplayName = "Foobar"),
};

UCLASS()
class UDuplicateSpecialSettings : public UObject
{
	GENERATED_BODY()


public:
	// UObject interface
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	UDuplicateSpecialSettings(const FObjectInitializer& ObjectInitializer);
	~UDuplicateSpecialSettings();

	float GetTranslateX() const { return TranslateX; }
	float GetTranslateY() const { return TranslateY; }
	float GetTranslateZ() const { return TranslateZ; }
	float GetRotationX() const { return RotationX; }
	float GetRotationY() const { return RotationY; }
	float GetRotationZ() const { return RotationZ; }
	float GetScaleX() const { return ScaleX; }
	float GetScaleY() const { return ScaleY; }
	float GetScaleZ() const { return ScaleZ; }
	void SetTranslateX(float InRadius);
	void SetTranslateY(float InRadius);
	void SetTranslateZ(float InRadius);
	void SetRotationX(float InRadius);
	void SetRotationY(float InRadius);
	void SetRotationZ(float InRadius);
	void SetScaleX(float InRadius);
	void SetScaleY(float InRadius);
	void SetScaleZ(float InRadius);

	bool GetBTranslateRelative() const { return bTranslateRelative; }
	bool GetBRotateRelative() const { return bRotateRelative; }
	bool GetBScaleRelative() const { return bScaleRelative; }
	bool GetBSelectDuplicated() const { return bSelectDuplicated; }

protected:
	UPROPERTY(EditAnywhere, Category = "Global Settings", meta = (DisplayName = "Relative Translation"))
		bool bTranslateRelative;
	UPROPERTY(EditAnywhere, Category = "Global Settings")
		float TranslateX;
	UPROPERTY(EditAnywhere, Category = "Global Settings")
		float TranslateY;
	UPROPERTY(EditAnywhere, Category = "Global Settings")
		float TranslateZ;
	
	UPROPERTY(EditAnywhere, Category = "Global Settings", meta = (DisplayName = "Relative Rotation"))
		bool bRotateRelative;
	UPROPERTY(EditAnywhere, Category = "Global Settings")
		float RotationX;
	UPROPERTY(EditAnywhere, Category = "Global Settings")
		float RotationY;
	UPROPERTY(EditAnywhere, Category = "Global Settings")
		float RotationZ;

	UPROPERTY(EditAnywhere, Category = "Global Settings", meta = (DisplayName = "Relative Scale"))
		bool bScaleRelative;
	UPROPERTY(EditAnywhere, Category = "Global Settings")
		float ScaleX;
	UPROPERTY(EditAnywhere, Category = "Global Settings")
		float ScaleY;
	UPROPERTY(EditAnywhere, Category = "Global Settings")
		float ScaleZ;

	UPROPERTY(EditAnywhere, Category = "Global Settings", meta = (DisplayName = "Select Duplicated Actors"))
		bool bSelectDuplicated;

public:
	/** Min and Max FloatFoo range retrieved from config */
	float boxMin;
	float boxMax;



	/** Example enum property */
	/*
	UPROPERTY(EditAnywhere, Category = "Global Settings")
		EDuplicateSpecialEnumDataExample EnumDataExample;*/
};
