// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef MYPROJECT_EnemyAI_generated_h
#error "EnemyAI.generated.h already included, missing '#pragma once' in EnemyAI.h"
#endif
#define MYPROJECT_EnemyAI_generated_h

#define MyProject_Source_MyProject_Public_EnemyAI_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_Public_EnemyAI_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnSeen) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_SeenPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPawnSeen(Z_Param_SeenPawn); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_Public_EnemyAI_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAI(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AEnemyAI(); \
public: \
	DECLARE_CLASS(AEnemyAI, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAI) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_Public_EnemyAI_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAI(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AEnemyAI(); \
public: \
	DECLARE_CLASS(AEnemyAI, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAI) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_Public_EnemyAI_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAI(AEnemyAI&&); \
	NO_API AEnemyAI(const AEnemyAI&); \
public:


#define MyProject_Source_MyProject_Public_EnemyAI_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAI(AEnemyAI&&); \
	NO_API AEnemyAI(const AEnemyAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAI)


#define MyProject_Source_MyProject_Public_EnemyAI_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(AEnemyAI, PawnSensingComp); } \
	FORCEINLINE static uint32 __PPO__bPatrol() { return STRUCT_OFFSET(AEnemyAI, bPatrol); } \
	FORCEINLINE static uint32 __PPO__FirstPatrolPoint() { return STRUCT_OFFSET(AEnemyAI, FirstPatrolPoint); } \
	FORCEINLINE static uint32 __PPO__SecondPatrolPoint() { return STRUCT_OFFSET(AEnemyAI, SecondPatrolPoint); }


#define MyProject_Source_MyProject_Public_EnemyAI_h_14_PROLOG
#define MyProject_Source_MyProject_Public_EnemyAI_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Public_EnemyAI_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Public_EnemyAI_h_17_RPC_WRAPPERS \
	MyProject_Source_MyProject_Public_EnemyAI_h_17_INCLASS \
	MyProject_Source_MyProject_Public_EnemyAI_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Public_EnemyAI_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Public_EnemyAI_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Public_EnemyAI_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Public_EnemyAI_h_17_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Public_EnemyAI_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Public_EnemyAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
