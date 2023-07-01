// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_OverworldCharacter_generated_h
#error "OverworldCharacter.generated.h already included, missing '#pragma once' in OverworldCharacter.h"
#endif
#define MYPROJECT_OverworldCharacter_generated_h

#define MyProject_Source_MyProject_Public_OverworldCharacter_h_15_RPC_WRAPPERS
#define MyProject_Source_MyProject_Public_OverworldCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Public_OverworldCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOverworldCharacter(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AOverworldCharacter(); \
public: \
	DECLARE_CLASS(AOverworldCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AOverworldCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_Public_OverworldCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAOverworldCharacter(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_AOverworldCharacter(); \
public: \
	DECLARE_CLASS(AOverworldCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AOverworldCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_Public_OverworldCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOverworldCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOverworldCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOverworldCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOverworldCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOverworldCharacter(AOverworldCharacter&&); \
	NO_API AOverworldCharacter(const AOverworldCharacter&); \
public:


#define MyProject_Source_MyProject_Public_OverworldCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOverworldCharacter(AOverworldCharacter&&); \
	NO_API AOverworldCharacter(const AOverworldCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOverworldCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOverworldCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOverworldCharacter)


#define MyProject_Source_MyProject_Public_OverworldCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AOverworldCharacter, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__SpringArmComponent() { return STRUCT_OFFSET(AOverworldCharacter, SpringArmComponent); } \
	FORCEINLINE static uint32 __PPO__Walk() { return STRUCT_OFFSET(AOverworldCharacter, Walk); } \
	FORCEINLINE static uint32 __PPO__Idle() { return STRUCT_OFFSET(AOverworldCharacter, Idle); }


#define MyProject_Source_MyProject_Public_OverworldCharacter_h_12_PROLOG
#define MyProject_Source_MyProject_Public_OverworldCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Public_OverworldCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Public_OverworldCharacter_h_15_RPC_WRAPPERS \
	MyProject_Source_MyProject_Public_OverworldCharacter_h_15_INCLASS \
	MyProject_Source_MyProject_Public_OverworldCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Public_OverworldCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Public_OverworldCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Public_OverworldCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Public_OverworldCharacter_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Public_OverworldCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Public_OverworldCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
