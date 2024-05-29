// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef CPPGAMEPLAY_FirstPersonCharacter_generated_h
#error "FirstPersonCharacter.generated.h already included, missing '#pragma once' in FirstPersonCharacter.h"
#endif
#define CPPGAMEPLAY_FirstPersonCharacter_generated_h

#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_SPARSE_DATA
#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_RPC_WRAPPERS
#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_EVENT_PARMS \
	struct FirstPersonCharacter_eventGetMuzzleLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FirstPersonCharacter_eventGetMuzzleLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_CALLBACK_WRAPPERS
#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPPGameplay"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPPGameplay"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPersonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public:


#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstPersonCharacter)


#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShootTraceChannel() { return STRUCT_OFFSET(AFirstPersonCharacter, ShootTraceChannel); } \
	FORCEINLINE static uint32 __PPO__ShootFXSP() { return STRUCT_OFFSET(AFirstPersonCharacter, ShootFXSP); }


#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_11_PROLOG \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_EVENT_PARMS


#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_SPARSE_DATA \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_RPC_WRAPPERS \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_CALLBACK_WRAPPERS \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_INCLASS \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_SPARSE_DATA \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_CALLBACK_WRAPPERS \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_INCLASS_NO_PURE_DECLS \
	CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPGAMEPLAY_API UClass* StaticClass<class AFirstPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CPPGameplay_Source_CPPGameplay_Public_FirstPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
