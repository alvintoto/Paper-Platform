// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/OverworldCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverworldCharacter() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AOverworldCharacter_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AOverworldCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AOverworldCharacter::StaticRegisterNativesAOverworldCharacter()
	{
	}
	UClass* Z_Construct_UClass_AOverworldCharacter_NoRegister()
	{
		return AOverworldCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AOverworldCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APaperCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "OverworldCharacter.h" },
				{ "ModuleRelativePath", "Public/OverworldCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Idle_MetaData[] = {
				{ "Category", "Animations" },
				{ "ModuleRelativePath", "Public/OverworldCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Idle = { UE4CodeGen_Private::EPropertyClass::Object, "Idle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AOverworldCharacter, Idle), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_Idle_MetaData, ARRAY_COUNT(NewProp_Idle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Walk_MetaData[] = {
				{ "Category", "Animations" },
				{ "ModuleRelativePath", "Public/OverworldCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Walk = { UE4CodeGen_Private::EPropertyClass::Object, "Walk", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AOverworldCharacter, Walk), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(NewProp_Walk_MetaData, ARRAY_COUNT(NewProp_Walk_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/OverworldCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArmComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AOverworldCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArmComponent_MetaData, ARRAY_COUNT(NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/OverworldCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AOverworldCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_CameraComponent_MetaData, ARRAY_COUNT(NewProp_CameraComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Idle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Walk,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArmComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AOverworldCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AOverworldCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOverworldCharacter, 915271717);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOverworldCharacter(Z_Construct_UClass_AOverworldCharacter, &AOverworldCharacter::StaticClass, TEXT("/Script/MyProject"), TEXT("AOverworldCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOverworldCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
