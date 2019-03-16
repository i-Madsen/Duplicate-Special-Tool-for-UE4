// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DuplicateSpecial/Public/DuplicateSpecialSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDuplicateSpecialSettings() {}
// Cross Module References
	DUPLICATESPECIAL_API UEnum* Z_Construct_UEnum_DuplicateSpecial_EDuplicateSpecialEnumDataExample();
	UPackage* Z_Construct_UPackage__Script_DuplicateSpecial();
	DUPLICATESPECIAL_API UClass* Z_Construct_UClass_UDuplicateSpecialSettings_NoRegister();
	DUPLICATESPECIAL_API UClass* Z_Construct_UClass_UDuplicateSpecialSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EDuplicateSpecialEnumDataExample_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DuplicateSpecial_EDuplicateSpecialEnumDataExample, Z_Construct_UPackage__Script_DuplicateSpecial(), TEXT("EDuplicateSpecialEnumDataExample"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDuplicateSpecialEnumDataExample(EDuplicateSpecialEnumDataExample_StaticEnum, TEXT("/Script/DuplicateSpecial"), TEXT("EDuplicateSpecialEnumDataExample"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DuplicateSpecial_EDuplicateSpecialEnumDataExample_CRC() { return 2061445535U; }
	UEnum* Z_Construct_UEnum_DuplicateSpecial_EDuplicateSpecialEnumDataExample()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DuplicateSpecial();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDuplicateSpecialEnumDataExample"), 0, Get_Z_Construct_UEnum_DuplicateSpecial_EDuplicateSpecialEnumDataExample_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDuplicateSpecialEnumDataExample::Foo", (int64)EDuplicateSpecialEnumDataExample::Foo },
				{ "EDuplicateSpecialEnumDataExample::Bar", (int64)EDuplicateSpecialEnumDataExample::Bar },
				{ "EDuplicateSpecialEnumDataExample::Foobar", (int64)EDuplicateSpecialEnumDataExample::Foobar },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bar.DisplayName", "Bar" },
				{ "Foo.DisplayName", "Foo" },
				{ "Foobar.DisplayName", "Foobar" },
				{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DuplicateSpecial,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDuplicateSpecialEnumDataExample",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDuplicateSpecialEnumDataExample",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UDuplicateSpecialSettings::StaticRegisterNativesUDuplicateSpecialSettings()
	{
	}
	UClass* Z_Construct_UClass_UDuplicateSpecialSettings_NoRegister()
	{
		return UDuplicateSpecialSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDuplicateSpecialSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelectDuplicated_MetaData[];
#endif
		static void NewProp_bSelectDuplicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectDuplicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleRelative_MetaData[];
#endif
		static void NewProp_bScaleRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleRelative;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateRelative_MetaData[];
#endif
		static void NewProp_bRotateRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateRelative;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslateZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslateZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslateY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslateY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslateX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslateX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTranslateRelative_MetaData[];
#endif
		static void NewProp_bTranslateRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTranslateRelative;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDuplicateSpecialSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DuplicateSpecial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DuplicateSpecialSettings.h" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "DisplayName", "Select Duplicated Actors" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated_SetBit(void* Obj)
	{
		((UDuplicateSpecialSettings*)Obj)->bSelectDuplicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelectDuplicated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDuplicateSpecialSettings), &Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleZ_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleZ = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UDuplicateSpecialSettings, ScaleZ), METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleY_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleY = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UDuplicateSpecialSettings, ScaleY), METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleX_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleX = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UDuplicateSpecialSettings, ScaleX), METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "DisplayName", "Relative Scale" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative_SetBit(void* Obj)
	{
		((UDuplicateSpecialSettings*)Obj)->bScaleRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative = { UE4CodeGen_Private::EPropertyClass::Bool, "bScaleRelative", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDuplicateSpecialSettings), &Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationZ_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationZ = { UE4CodeGen_Private::EPropertyClass::Float, "RotationZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UDuplicateSpecialSettings, RotationZ), METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationY_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationY = { UE4CodeGen_Private::EPropertyClass::Float, "RotationY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UDuplicateSpecialSettings, RotationY), METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationX_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationX = { UE4CodeGen_Private::EPropertyClass::Float, "RotationX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UDuplicateSpecialSettings, RotationX), METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "DisplayName", "Relative Rotation" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative_SetBit(void* Obj)
	{
		((UDuplicateSpecialSettings*)Obj)->bRotateRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotateRelative", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDuplicateSpecialSettings), &Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateZ_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateZ = { UE4CodeGen_Private::EPropertyClass::Float, "TranslateZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UDuplicateSpecialSettings, TranslateZ), METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateY_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateY = { UE4CodeGen_Private::EPropertyClass::Float, "TranslateY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UDuplicateSpecialSettings, TranslateY), METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateX_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateX = { UE4CodeGen_Private::EPropertyClass::Float, "TranslateX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UDuplicateSpecialSettings, TranslateX), METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative_MetaData[] = {
		{ "Category", "Global Settings" },
		{ "DisplayName", "Relative Translation" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative_SetBit(void* Obj)
	{
		((UDuplicateSpecialSettings*)Obj)->bTranslateRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative = { UE4CodeGen_Private::EPropertyClass::Bool, "bTranslateRelative", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDuplicateSpecialSettings), &Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDuplicateSpecialSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_ScaleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_RotationX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_TranslateX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDuplicateSpecialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDuplicateSpecialSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::ClassParams = {
		&UDuplicateSpecialSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		Z_Construct_UClass_UDuplicateSpecialSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDuplicateSpecialSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDuplicateSpecialSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDuplicateSpecialSettings, 3332615931);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDuplicateSpecialSettings(Z_Construct_UClass_UDuplicateSpecialSettings, &UDuplicateSpecialSettings::StaticClass, TEXT("/Script/DuplicateSpecial"), TEXT("UDuplicateSpecialSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDuplicateSpecialSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
