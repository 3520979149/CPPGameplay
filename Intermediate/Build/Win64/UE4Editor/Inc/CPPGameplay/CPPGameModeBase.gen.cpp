// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPGameplay/Public/CPPGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPPGameModeBase() {}
// Cross Module References
	CPPGAMEPLAY_API UEnum* Z_Construct_UEnum_CPPGameplay_EGameDifficulty();
	UPackage* Z_Construct_UPackage__Script_CPPGameplay();
	CPPGAMEPLAY_API UClass* Z_Construct_UClass_ACPPGameModeBase_NoRegister();
	CPPGAMEPLAY_API UClass* Z_Construct_UClass_ACPPGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	CPPGAMEPLAY_API UClass* Z_Construct_UClass_AGameCube_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* EGameDifficulty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CPPGameplay_EGameDifficulty, Z_Construct_UPackage__Script_CPPGameplay(), TEXT("EGameDifficulty"));
		}
		return Singleton;
	}
	template<> CPPGAMEPLAY_API UEnum* StaticEnum<EGameDifficulty>()
	{
		return EGameDifficulty_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameDifficulty(EGameDifficulty_StaticEnum, TEXT("/Script/CPPGameplay"), TEXT("EGameDifficulty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CPPGameplay_EGameDifficulty_Hash() { return 2772841894U; }
	UEnum* Z_Construct_UEnum_CPPGameplay_EGameDifficulty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CPPGameplay();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameDifficulty"), 0, Get_Z_Construct_UEnum_CPPGameplay_EGameDifficulty_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameDifficulty::Easy", (int64)EGameDifficulty::Easy },
				{ "EGameDifficulty::Medium", (int64)EGameDifficulty::Medium },
				{ "EGameDifficulty::Hard", (int64)EGameDifficulty::Hard },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/// <summary>\n/// ???\xd7\xb3\xcc\xb6?\xc3\xb6??????\n/// </summary>\n" },
				{ "Easy.Comment", "/// <summary>\n/// ????\n/// </summary>\n" },
				{ "Easy.Name", "EGameDifficulty::Easy" },
				{ "Easy.ToolTip", "<summary>\n????\n</summary>" },
				{ "Hard.Comment", "/// <summary>\n/// ????\n/// </summary>\n" },
				{ "Hard.Name", "EGameDifficulty::Hard" },
				{ "Hard.ToolTip", "<summary>\n????\n</summary>" },
				{ "Medium.Comment", "/// <summary>\n/// ?\xd0\xb5?\n/// </summary>\n" },
				{ "Medium.Name", "EGameDifficulty::Medium" },
				{ "Medium.ToolTip", "<summary>\n?\xd0\xb5?\n</summary>" },
				{ "ModuleRelativePath", "Public/CPPGameModeBase.h" },
				{ "ToolTip", "<summary>\n???\xd7\xb3\xcc\xb6?\xc3\xb6??????\n</summary>" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CPPGameplay,
				nullptr,
				"EGameDifficulty",
				"EGameDifficulty",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ACPPGameModeBase::execHandleCubeBeenHit)
	{
		P_GET_OBJECT(AGameCube,Z_Param_HitCube);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCubeBeenHit(Z_Param_HitCube);
		P_NATIVE_END;
	}
	void ACPPGameModeBase::StaticRegisterNativesACPPGameModeBase()
	{
		UClass* Class = ACPPGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCubeBeenHit", &ACPPGameModeBase::execHandleCubeBeenHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit_Statics
	{
		struct CPPGameModeBase_eventHandleCubeBeenHit_Parms
		{
			AGameCube* HitCube;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitCube;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit_Statics::NewProp_HitCube = { "HitCube", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPPGameModeBase_eventHandleCubeBeenHit_Parms, HitCube), Z_Construct_UClass_AGameCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit_Statics::NewProp_HitCube,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// ?????????\xd0\xb5\xc4\xb7????\xc7\xb7??????????\xc7\xbb\xd6\xb8?\xd4\xad??\n/// </summary>\n/// <param name=\"HitCube\">?????\xd0\xb5\xc4\xb7?????\xd6\xb8??</param>\n" },
		{ "ModuleRelativePath", "Public/CPPGameModeBase.h" },
		{ "ToolTip", "<summary>\n?????????\xd0\xb5\xc4\xb7????\xc7\xb7??????????\xc7\xbb\xd6\xb8?\xd4\xad??\n</summary>\n<param name=\"HitCube\">?????\xd0\xb5\xc4\xb7?????\xd6\xb8??</param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPPGameModeBase, nullptr, "HandleCubeBeenHit", nullptr, nullptr, sizeof(CPPGameModeBase_eventHandleCubeBeenHit_Parms), Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACPPGameModeBase_NoRegister()
	{
		return ACPPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACPPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultDifficulty_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultDifficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameCubeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameCubeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CubeColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CubeColors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPPGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPPGameModeBase_HandleCubeBeenHit, "HandleCubeBeenHit" }, // 671997092
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CPPGameModeBase.h" },
		{ "ModuleRelativePath", "Public/CPPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_DefaultDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_DefaultDifficulty_MetaData[] = {
		{ "Category", "CPPGameModeBase" },
		{ "Comment", "/// <summary>\n/// ?\xd1\xb6\xc8\xb5\xc8\xbc?????\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/CPPGameModeBase.h" },
		{ "ToolTip", "<summary>\n?\xd1\xb6\xc8\xb5\xc8\xbc?????\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_DefaultDifficulty = { "DefaultDifficulty", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPPGameModeBase, DefaultDifficulty), Z_Construct_UEnum_CPPGameplay_EGameDifficulty, METADATA_PARAMS(Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_DefaultDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_DefaultDifficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_GameCubeClass_MetaData[] = {
		{ "Category", "CPPGameModeBase" },
		{ "Comment", "/// <summary>\n/// ???\xd3\xb5??\xd3\xb6???\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/CPPGameModeBase.h" },
		{ "ToolTip", "<summary>\n???\xd3\xb5??\xd3\xb6???\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_GameCubeClass = { "GameCubeClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPPGameModeBase, GameCubeClass), Z_Construct_UClass_AGameCube_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_GameCubeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_GameCubeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_SpawnSpace_MetaData[] = {
		{ "Category", "CPPGameModeBase" },
		{ "Comment", "/// <summary>\n/// ???\xd3\xbc??\xc4\xbc???\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/CPPGameModeBase.h" },
		{ "ToolTip", "<summary>\n???\xd3\xbc??\xc4\xbc???\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_SpawnSpace = { "SpawnSpace", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPPGameModeBase, SpawnSpace), METADATA_PARAMS(Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_SpawnSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_SpawnSpace_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_CubeColors_Inner = { "CubeColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_CubeColors_MetaData[] = {
		{ "Category", "CPPGameModeBase" },
		{ "Comment", "/// <summary>\n/// ??????FLinearColor???\xcd\xb6???????\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/CPPGameModeBase.h" },
		{ "ToolTip", "<summary>\n??????FLinearColor???\xcd\xb6???????\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_CubeColors = { "CubeColors", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPPGameModeBase, CubeColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_CubeColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_CubeColors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPPGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_DefaultDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_DefaultDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_GameCubeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_SpawnSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_CubeColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPPGameModeBase_Statics::NewProp_CubeColors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPPGameModeBase_Statics::ClassParams = {
		&ACPPGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPPGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPPGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPPGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPPGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPPGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPPGameModeBase, 522087592);
	template<> CPPGAMEPLAY_API UClass* StaticClass<ACPPGameModeBase>()
	{
		return ACPPGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPPGameModeBase(Z_Construct_UClass_ACPPGameModeBase, &ACPPGameModeBase::StaticClass, TEXT("/Script/CPPGameplay"), TEXT("ACPPGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
