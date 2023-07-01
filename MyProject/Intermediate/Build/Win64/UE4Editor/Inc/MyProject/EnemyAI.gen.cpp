// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/EnemyAI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAI() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AEnemyAI_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AEnemyAI();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AEnemyAI_OnPawnSeen();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	void AEnemyAI::StaticRegisterNativesAEnemyAI()
	{
		UClass* Class = AEnemyAI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnSeen", (Native)&AEnemyAI::execOnPawnSeen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AEnemyAI_OnPawnSeen()
	{
		struct EnemyAI_eventOnPawnSeen_Parms
		{
			APawn* SeenPawn;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeenPawn = { UE4CodeGen_Private::EPropertyClass::Object, "SeenPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnemyAI_eventOnPawnSeen_Parms, SeenPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeenPawn,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EnemyAI.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyAI, "OnPawnSeen", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(EnemyAI_eventOnPawnSeen_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemyAI_NoRegister()
	{
		return AEnemyAI::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemyAI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APaperCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AEnemyAI_OnPawnSeen, "OnPawnSeen" }, // 2999668141
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "EnemyAI.h" },
				{ "ModuleRelativePath", "Public/EnemyAI.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondPatrolPoint_MetaData[] = {
				{ "Category", "AI" },
				{ "EditCondition", "bPatrol" },
				{ "ModuleRelativePath", "Public/EnemyAI.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondPatrolPoint = { UE4CodeGen_Private::EPropertyClass::Object, "SecondPatrolPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AEnemyAI, SecondPatrolPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_SecondPatrolPoint_MetaData, ARRAY_COUNT(NewProp_SecondPatrolPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPatrolPoint_MetaData[] = {
				{ "Category", "AI" },
				{ "EditCondition", "bPatrol" },
				{ "ModuleRelativePath", "Public/EnemyAI.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPatrolPoint = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPatrolPoint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, STRUCT_OFFSET(AEnemyAI, FirstPatrolPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_FirstPatrolPoint_MetaData, ARRAY_COUNT(NewProp_FirstPatrolPoint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPatrol_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "Public/EnemyAI.h" },
			};
#endif
			auto NewProp_bPatrol_SetBit = [](void* Obj){ ((AEnemyAI*)Obj)->bPatrol = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPatrol = { UE4CodeGen_Private::EPropertyClass::Bool, "bPatrol", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000801, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AEnemyAI), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPatrol_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPatrol_MetaData, ARRAY_COUNT(NewProp_bPatrol_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/EnemyAI.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp = { UE4CodeGen_Private::EPropertyClass::Object, "PawnSensingComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AEnemyAI, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(NewProp_PawnSensingComp_MetaData, ARRAY_COUNT(NewProp_PawnSensingComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SecondPatrolPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstPatrolPoint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPatrol,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PawnSensingComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AEnemyAI>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AEnemyAI::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AEnemyAI, 351342400);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyAI(Z_Construct_UClass_AEnemyAI, &AEnemyAI::StaticClass, TEXT("/Script/MyProject"), TEXT("AEnemyAI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
