// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPGAMEPLAY_GameCube_generated_h
#error "GameCube.generated.h already included, missing '#pragma once' in GameCube.h"
#endif
#define CPPGAMEPLAY_GameCube_generated_h

#define CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_SPARSE_DATA
#define CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_RPC_WRAPPERS
#define CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameCube(); \
	friend struct Z_Construct_UClass_AGameCube_Statics; \
public: \
	DECLARE_CLASS(AGameCube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPPGameplay"), NO_API) \
	DECLARE_SERIALIZER(AGameCube)


#define CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAGameCube(); \
	friend struct Z_Construct_UClass_AGameCube_Statics; \
public: \
	DECLARE_CLASS(AGameCube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPPGameplay"), NO_API) \
	DECLARE_SERIALIZER(AGameCube)


#define CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameCube(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCube); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCube(AGameCube&&); \
	NO_API AGameCube(const AGameCube&); \
public:


#define CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameCube(AGameCube&&); \
	NO_API AGameCube(const AGameCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCube); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameCube)


#define CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CubeMesh() { return STRUCT_OFFSET(AGameCube, CubeMesh); } \
	FORCEINLINE static uint32 __PPO__ChangedColor() { return STRUCT_OFFSET(AGameCube, ChangedColor); }


#define CPPGameplay_Source_CPPGameplay_Public_GameCube_h_22_PROLOG
#define CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_PRIVATE_PROPERTY_OFFSET \
	CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_SPARSE_DATA \
	CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_RPC_WRAPPERS \
	CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_INCLASS \
	CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_PRIVATE_PROPERTY_OFFSET \
	CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_SPARSE_DATA \
	CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_INCLASS_NO_PURE_DECLS \
	CPPGameplay_Source_CPPGameplay_Public_GameCube_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPGAMEPLAY_API UClass* StaticClass<class AGameCube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPPGameplay_Source_CPPGameplay_Public_GameCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
