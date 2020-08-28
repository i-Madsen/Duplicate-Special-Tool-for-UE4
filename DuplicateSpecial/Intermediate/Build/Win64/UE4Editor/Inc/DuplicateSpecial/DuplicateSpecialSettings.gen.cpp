// Copyright Epic Games, Inc. All Rights Reserved.
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
	DUPLICATESPECIAL_API UClass* Z_Construct_UClass_UDuplicateSpecialSettings_NoRegister();
	DUPLICATESPECIAL_API UClass* Z_Construct_UClass_UDuplicateSpecialSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DuplicateSpecial();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfCopies_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfCopies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachToParent_MetaData[];
#endif
		static void NewProp_bAttachToParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachToParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderPathName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderPathName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateNewOutlinerFolder_MetaData[];
#endif
		static void NewProp_bCreateNewOutlinerFolder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateNewOutlinerFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelectDuplicated_MetaData[];
#endif
		static void NewProp_bSelectDuplicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectDuplicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleRelative_MetaData[];
#endif
		static void NewProp_bScaleRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleRelative;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateRelative_MetaData[];
#endif
		static void NewProp_bRotateRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateRelative;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Translate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Translate;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_NumberOfCopies_MetaData[] = {
		{ "Category", "Duplication Options" },
		{ "Comment", "/** How many times to run the duplication process. Typically should be used with Select Duplicated set to true. */" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
		{ "ToolTip", "How many times to run the duplication process. Typically should be used with Select Duplicated set to true." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_NumberOfCopies = { "NumberOfCopies", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDuplicateSpecialSettings, NumberOfCopies), METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_NumberOfCopies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_NumberOfCopies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bAttachToParent_MetaData[] = {
		{ "Category", "Duplication Options" },
		{ "Comment", "/** Attaches duplicates to the actor(s) they were duplicated from with wielded simulated bodies. */" },
		{ "DisplayName", "Attach to Parent" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
		{ "ToolTip", "Attaches duplicates to the actor(s) they were duplicated from with wielded simulated bodies." },
	};
#endif
	void Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bAttachToParent_SetBit(void* Obj)
	{
		((UDuplicateSpecialSettings*)Obj)->bAttachToParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bAttachToParent = { "bAttachToParent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDuplicateSpecialSettings), &Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bAttachToParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bAttachToParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bAttachToParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_FolderPathName_MetaData[] = {
		{ "Category", "Duplication Options" },
		{ "Comment", "/** Creates new folders for the given path name in the outliner. If part of the path already exists, places duplicate actors under the existing folder. */" },
		{ "EditCondition", "bCreateNewOutlinerFolder" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
		{ "ToolTip", "Creates new folders for the given path name in the outliner. If part of the path already exists, places duplicate actors under the existing folder." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_FolderPathName = { "FolderPathName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDuplicateSpecialSettings, FolderPathName), METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_FolderPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_FolderPathName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bCreateNewOutlinerFolder_MetaData[] = {
		{ "Category", "Duplication Options" },
		{ "Comment", "/** If true, duplicate actors are placed under the new folder. */" },
		{ "DisplayName", "Create New Outliner Folder" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
		{ "ToolTip", "If true, duplicate actors are placed under the new folder." },
	};
#endif
	void Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bCreateNewOutlinerFolder_SetBit(void* Obj)
	{
		((UDuplicateSpecialSettings*)Obj)->bCreateNewOutlinerFolder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bCreateNewOutlinerFolder = { "bCreateNewOutlinerFolder", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDuplicateSpecialSettings), &Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bCreateNewOutlinerFolder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bCreateNewOutlinerFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bCreateNewOutlinerFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated_MetaData[] = {
		{ "Category", "Duplication Options" },
		{ "Comment", "/** If true, selection is set to the duplicate actors at the end of the duplication process. */" },
		{ "DisplayName", "Select Duplicated Actors" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
		{ "ToolTip", "If true, selection is set to the duplicate actors at the end of the duplication process." },
	};
#endif
	void Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated_SetBit(void* Obj)
	{
		((UDuplicateSpecialSettings*)Obj)->bSelectDuplicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated = { "bSelectDuplicated", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDuplicateSpecialSettings), &Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDuplicateSpecialSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative_MetaData[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/** If true, multiplies the actor's relative scale. If false, sets the actor's scale. */" },
		{ "DisplayName", "Relative Scale" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
		{ "ToolTip", "If true, multiplies the actor's relative scale. If false, sets the actor's scale." },
	};
#endif
	void Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative_SetBit(void* Obj)
	{
		((UDuplicateSpecialSettings*)Obj)->bScaleRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative = { "bScaleRelative", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDuplicateSpecialSettings), &Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDuplicateSpecialSettings, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative_MetaData[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/** If true, uses AddActorLocalRotation(). If false, uses AddActorWorldRotation(). */" },
		{ "DisplayName", "Relative Rotation" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
		{ "ToolTip", "If true, uses AddActorLocalRotation(). If false, uses AddActorWorldRotation()." },
	};
#endif
	void Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative_SetBit(void* Obj)
	{
		((UDuplicateSpecialSettings*)Obj)->bRotateRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative = { "bRotateRelative", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDuplicateSpecialSettings), &Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Translate_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Translate = { "Translate", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDuplicateSpecialSettings, Translate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Translate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Translate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative_MetaData[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/** If true, uses AddActorLocalOffset(). If false, uses AddActorWorldOffset(). */" },
		{ "DisplayName", "Relative Translation" },
		{ "ModuleRelativePath", "Public/DuplicateSpecialSettings.h" },
		{ "ToolTip", "If true, uses AddActorLocalOffset(). If false, uses AddActorWorldOffset()." },
	};
#endif
	void Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative_SetBit(void* Obj)
	{
		((UDuplicateSpecialSettings*)Obj)->bTranslateRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative = { "bTranslateRelative", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDuplicateSpecialSettings), &Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDuplicateSpecialSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_NumberOfCopies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bAttachToParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_FolderPathName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bCreateNewOutlinerFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bSelectDuplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bScaleRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bRotateRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_Translate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDuplicateSpecialSettings_Statics::NewProp_bTranslateRelative,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDuplicateSpecialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDuplicateSpecialSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDuplicateSpecialSettings_Statics::ClassParams = {
		&UDuplicateSpecialSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDuplicateSpecialSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDuplicateSpecialSettings_Statics::Class_MetaDataParams))
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
	IMPLEMENT_CLASS(UDuplicateSpecialSettings, 2196264599);
	template<> DUPLICATESPECIAL_API UClass* StaticClass<UDuplicateSpecialSettings>()
	{
		return UDuplicateSpecialSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDuplicateSpecialSettings(Z_Construct_UClass_UDuplicateSpecialSettings, &UDuplicateSpecialSettings::StaticClass, TEXT("/Script/DuplicateSpecial"), TEXT("UDuplicateSpecialSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDuplicateSpecialSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
