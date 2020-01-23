// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNTITLEDTETRIS_UntitledTetrisCharacter_generated_h
#error "UntitledTetrisCharacter.generated.h already included, missing '#pragma once' in UntitledTetrisCharacter.h"
#endif
#define UNTITLEDTETRIS_UntitledTetrisCharacter_generated_h

#define UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_SPARSE_DATA
#define UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_RPC_WRAPPERS
#define UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUntitledTetrisCharacter(); \
	friend struct Z_Construct_UClass_AUntitledTetrisCharacter_Statics; \
public: \
	DECLARE_CLASS(AUntitledTetrisCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UntitledTetris"), NO_API) \
	DECLARE_SERIALIZER(AUntitledTetrisCharacter)


#define UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAUntitledTetrisCharacter(); \
	friend struct Z_Construct_UClass_AUntitledTetrisCharacter_Statics; \
public: \
	DECLARE_CLASS(AUntitledTetrisCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UntitledTetris"), NO_API) \
	DECLARE_SERIALIZER(AUntitledTetrisCharacter)


#define UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUntitledTetrisCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUntitledTetrisCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUntitledTetrisCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUntitledTetrisCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUntitledTetrisCharacter(AUntitledTetrisCharacter&&); \
	NO_API AUntitledTetrisCharacter(const AUntitledTetrisCharacter&); \
public:


#define UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUntitledTetrisCharacter(AUntitledTetrisCharacter&&); \
	NO_API AUntitledTetrisCharacter(const AUntitledTetrisCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUntitledTetrisCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUntitledTetrisCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUntitledTetrisCharacter)


#define UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AUntitledTetrisCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AUntitledTetrisCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(AUntitledTetrisCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AUntitledTetrisCharacter, IdleAnimation); }


#define UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_19_PROLOG
#define UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_SPARSE_DATA \
	UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_RPC_WRAPPERS \
	UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_INCLASS \
	UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_SPARSE_DATA \
	UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_INCLASS_NO_PURE_DECLS \
	UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNTITLEDTETRIS_API UClass* StaticClass<class AUntitledTetrisCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UntitledTetris_Source_UntitledTetris_UntitledTetrisCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
