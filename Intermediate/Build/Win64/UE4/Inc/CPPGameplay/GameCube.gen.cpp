// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPGameplay/Public/GameCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCube() {}
// Cross Module References
	CPPGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CPPGameplay();
	CPPGAMEPLAY_API UClass* Z_Construct_UClass_AGameCube_NoRegister();
	CPPGAMEPLAY_API UClass* Z_Construct_UClass_AGameCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature_Statics
	{
		struct _Script_CPPGameplay_eventAubeBeenHitSignature_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature_Statics::NewProp_HitCube = { "HitCube", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_CPPGameplay_eventAubeBeenHitSignature_Parms, HitCube), Z_Construct_UClass_AGameCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature_Statics::NewProp_HitCube,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n* ??\xca\xb6????????\n* ??\xca\xb6?????????\xc7\xb4?????\xd0\xb4?\xe6\xb7\xb6?\xd0\xb7\xc7\xb3???\xd2\xaa??\xd2\xbb??????\n* ??\xca\xb6???????????\xe4\xba\xac?\xe5\xa3\xac???????? abc??xxx??acaic ?????\xe5\xb2\xbb?????\xc4\xb1?\xca\xb6????\n* ?\xef\xb7\xa8??????\n* c++?\xd0\xb1?\xca\xb6???????\xd4\xa1?_????$,\xd3\xa2????\xc4\xb8?????????\xc9\xa3????????\xd6\xb2??\xdc\xb7??\xda\xbf?\xcd\xb7??\n* ??????\xca\xbd??\n* ????????????\xca\xbd?\xd0\xa1??\xd5\xb7?????camel case????????\xcb\xb9??????Pascal Case??\n* ?\xd5\xb7??????\xd0\xb1?\xca\xb6??????\xc4\xb8\xd0\xa1\xd0\xb4????????\xc4\xb8??\xd0\xb4????\xcb\xb9?????????????\xd7\xb5???????\xc4\xb8??\xd0\xb4??\n*\n* ??????\xd2\xbb\xd0\xa9\xd4\xbc???\xd7\xb3\xc9\xb5???????\xca\xbd??????????\xc8\xab??\xce\xaa??\xd0\xb4??????\xd6\xae???\xc3\xa1?_?????\xd3\xa3?\xc4\xb3\xd0\xa9 C++ ??\xd6\xb8?????????\xd6\xa3??\xc3\xa1?__????\xcd\xb7??\n*///?????\xc2\xbc??\xc9\xb7?????\xc7\xa9??\n" },
		{ "ModuleRelativePath", "Public/GameCube.h" },
		{ "ToolTip", "* ??\xca\xb6????????\n* ??\xca\xb6?????????\xc7\xb4?????\xd0\xb4?\xe6\xb7\xb6?\xd0\xb7\xc7\xb3???\xd2\xaa??\xd2\xbb??????\n* ??\xca\xb6???????????\xe4\xba\xac?\xe5\xa3\xac???????? abc??xxx??acaic ?????\xe5\xb2\xbb?????\xc4\xb1?\xca\xb6????\n* ?\xef\xb7\xa8??????\n* c++?\xd0\xb1?\xca\xb6???????\xd4\xa1?_????$,\xd3\xa2????\xc4\xb8?????????\xc9\xa3????????\xd6\xb2??\xdc\xb7??\xda\xbf?\xcd\xb7??\n* ??????\xca\xbd??\n* ????????????\xca\xbd?\xd0\xa1??\xd5\xb7?????camel case????????\xcb\xb9??????Pascal Case??\n* ?\xd5\xb7??????\xd0\xb1?\xca\xb6??????\xc4\xb8\xd0\xa1\xd0\xb4????????\xc4\xb8??\xd0\xb4????\xcb\xb9?????????????\xd7\xb5???????\xc4\xb8??\xd0\xb4??\n*\n* ??????\xd2\xbb\xd0\xa9\xd4\xbc???\xd7\xb3\xc9\xb5???????\xca\xbd??????????\xc8\xab??\xce\xaa??\xd0\xb4??????\xd6\xae???\xc3\xa1?_?????\xd3\xa3?\xc4\xb3\xd0\xa9 C++ ??\xd6\xb8?????????\xd6\xa3??\xc3\xa1?__????\xcd\xb7??\n//?????\xc2\xbc??\xc9\xb7?????\xc7\xa9??" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CPPGameplay, nullptr, "AubeBeenHitSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_CPPGameplay_eventAubeBeenHitSignature_Parms), Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AGameCube::execDelayRecover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelayRecover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameCube::execGetChangedColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetChangedColor();
		P_NATIVE_END;
	}
	static FName NAME_AGameCube_DisplayEliminateFX = FName(TEXT("DisplayEliminateFX"));
	void AGameCube::DisplayEliminateFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameCube_DisplayEliminateFX),NULL);
	}
	void AGameCube::StaticRegisterNativesAGameCube()
	{
		UClass* Class = AGameCube::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelayRecover", &AGameCube::execDelayRecover },
			{ "GetChangedColor", &AGameCube::execGetChangedColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameCube_DelayRecover_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameCube_DelayRecover_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameCube.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCube_DelayRecover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCube, nullptr, "DelayRecover", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameCube_DelayRecover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCube_DelayRecover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameCube_DelayRecover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameCube_DelayRecover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameCube_DisplayEliminateFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameCube_DisplayEliminateFX_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// ????????\xca\xb1???\xc5\xb5???????\xd0\xa7\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/GameCube.h" },
		{ "ToolTip", "<summary>\n????????\xca\xb1???\xc5\xb5???????\xd0\xa7\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCube_DisplayEliminateFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCube, nullptr, "DisplayEliminateFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameCube_DisplayEliminateFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCube_DisplayEliminateFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameCube_DisplayEliminateFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameCube_DisplayEliminateFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameCube_GetChangedColor_Statics
	{
		struct GameCube_eventGetChangedColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameCube_GetChangedColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameCube_eventGetChangedColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameCube_GetChangedColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameCube_GetChangedColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameCube_GetChangedColor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//???????\xc7\xa3?\xca\xb9????????????\xcd\xbc?\xd0\xb5??\xc3\xa3???\xce\xaa????????\n/// <summary>\n/// ????\xcd\xbc?\xd0\xbf??\xd4\xb5??\xc3\xb5\xc4\xba????????\xd4\xb5\xc3\xb5??\xc3\xb5?????????\xc9\xab\n/// </summary>\n/// <returns>??????\xc9\xab</returns>\n" },
		{ "ModuleRelativePath", "Public/GameCube.h" },
		{ "ToolTip", "???????\xc7\xa3?\xca\xb9????????????\xcd\xbc?\xd0\xb5??\xc3\xa3???\xce\xaa????????\n <summary>\n ????\xcd\xbc?\xd0\xbf??\xd4\xb5??\xc3\xb5\xc4\xba????????\xd4\xb5\xc3\xb5??\xc3\xb5?????????\xc9\xab\n </summary>\n <returns>??????\xc9\xab</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCube_GetChangedColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameCube, nullptr, "GetChangedColor", nullptr, nullptr, sizeof(GameCube_eventGetChangedColor_Parms), Z_Construct_UFunction_AGameCube_GetChangedColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCube_GetChangedColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameCube_GetChangedColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCube_GetChangedColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameCube_GetChangedColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameCube_GetChangedColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameCube_NoRegister()
	{
		return AGameCube::StaticClass();
	}
	struct Z_Construct_UClass_AGameCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCubeBeenHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCubeBeenHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangedColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameCube_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameCube_DelayRecover, "DelayRecover" }, // 1319931287
		{ &Z_Construct_UFunction_AGameCube_DisplayEliminateFX, "DisplayEliminateFX" }, // 1600212640
		{ &Z_Construct_UFunction_AGameCube_GetChangedColor, "GetChangedColor" }, // 1033084310
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameCube.h" },
		{ "ModuleRelativePath", "Public/GameCube.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCube_Statics::NewProp_OnCubeBeenHit_MetaData[] = {
		{ "Comment", "//????\xd2\xbb??\xce\xaf?????\xcd\xb5??\xd6\xb6\xce\xa3?????????\xcd\xa8??\xca\xb5??????\n" },
		{ "ModuleRelativePath", "Public/GameCube.h" },
		{ "ToolTip", "????\xd2\xbb??\xce\xaf?????\xcd\xb5??\xd6\xb6\xce\xa3?????????\xcd\xa8??\xca\xb5??????" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGameCube_Statics::NewProp_OnCubeBeenHit = { "OnCubeBeenHit", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameCube, OnCubeBeenHit), Z_Construct_UDelegateFunction_CPPGameplay_AubeBeenHitSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGameCube_Statics::NewProp_OnCubeBeenHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameCube_Statics::NewProp_OnCubeBeenHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCube_Statics::NewProp_CubeMesh_MetaData[] = {
		{ "Category", "GameCube" },
		{ "Comment", "/// <summary>\n/// ????????????\xd6\xb8??\n/// </summary>\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameCube.h" },
		{ "ToolTip", "<summary>\n????????????\xd6\xb8??\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCube_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameCube, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameCube_Statics::NewProp_CubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameCube_Statics::NewProp_CubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameCube_Statics::NewProp_ChangedColor_MetaData[] = {
		{ "Category", "GameCube" },
		{ "Comment", "/// <summary>\n/// \xd2\xaa?\xc4\xb1?????\xc9\xab?????\xe4\xb5\xbd??\xcd\xbc\xcf\xb8???????\xcf\xa3???\xcc\xac???\xc4\xa1?\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/GameCube.h" },
		{ "ToolTip", "<summary>\n\xd2\xaa?\xc4\xb1?????\xc9\xab?????\xe4\xb5\xbd??\xcd\xbc\xcf\xb8???????\xcf\xa3???\xcc\xac???\xc4\xa1?\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameCube_Statics::NewProp_ChangedColor = { "ChangedColor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameCube, ChangedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AGameCube_Statics::NewProp_ChangedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameCube_Statics::NewProp_ChangedColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCube_Statics::NewProp_OnCubeBeenHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCube_Statics::NewProp_CubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCube_Statics::NewProp_ChangedColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameCube_Statics::ClassParams = {
		&AGameCube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameCube_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameCube, 4089972377);
	template<> CPPGAMEPLAY_API UClass* StaticClass<AGameCube>()
	{
		return AGameCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameCube(Z_Construct_UClass_AGameCube, &AGameCube::StaticClass, TEXT("/Script/CPPGameplay"), TEXT("AGameCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
