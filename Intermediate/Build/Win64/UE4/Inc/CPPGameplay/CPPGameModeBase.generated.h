// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameCube;
#ifdef CPPGAMEPLAY_CPPGameModeBase_generated_h
#error "CPPGameModeBase.generated.h already included, missing '#pragma once' in CPPGameModeBase.h"
#endif
#define CPPGAMEPLAY_CPPGameModeBase_generated_h

#define CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_SPARSE_DATA
#define CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleCubeBeenHit);


#define CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleCubeBeenHit);


#define CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPPGameModeBase(); \
	friend struct Z_Construct_UClass_ACPPGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACPPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPPGameplay"), NO_API) \
	DECLARE_SERIALIZER(ACPPGameModeBase)


#define CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_INCLASS \
private: \
	static void StaticRegisterNativesACPPGameModeBase(); \
	friend struct Z_Construct_UClass_ACPPGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ACPPGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPPGameplay"), NO_API) \
	DECLARE_SERIALIZER(ACPPGameModeBase)


#define CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPPGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPPGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPPGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPPGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPPGameModeBase(ACPPGameModeBase&&); \
	NO_API ACPPGameModeBase(const ACPPGameModeBase&); \
public:


#define CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPPGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPPGameModeBase(ACPPGameModeBase&&); \
	NO_API ACPPGameModeBase(const ACPPGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPPGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPPGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPPGameModeBase)


#define CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultDifficulty() { return STRUCT_OFFSET(ACPPGameModeBase, DefaultDifficulty); } \
	FORCEINLINE static uint32 __PPO__GameCubeClass() { return STRUCT_OFFSET(ACPPGameModeBase, GameCubeClass); } \
	FORCEINLINE static uint32 __PPO__SpawnSpace() { return STRUCT_OFFSET(ACPPGameModeBase, SpawnSpace); } \
	FORCEINLINE static uint32 __PPO__CubeColors() { return STRUCT_OFFSET(ACPPGameModeBase, CubeColors); }


#define CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_34_PROLOG
#define CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_PRIVATE_PROPERTY_OFFSET \
	CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_SPARSE_DATA \
	CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_RPC_WRAPPERS \
	CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_INCLASS \
	CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_PRIVATE_PROPERTY_OFFSET \
	CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_SPARSE_DATA \
	CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_INCLASS_NO_PURE_DECLS \
	CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPGAMEPLAY_API UClass* StaticClass<class ACPPGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPPGameplay_Source_CPPGameplay_Public_CPPGameModeBase_h


#define FOREACH_ENUM_EGAMEDIFFICULTY(op) \
	op(EGameDifficulty::Easy) \
	op(EGameDifficulty::Medium) \
	op(EGameDifficulty::Hard) 

enum class EGameDifficulty : uint8;
template<> CPPGAMEPLAY_API UEnum* StaticEnum<EGameDifficulty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
