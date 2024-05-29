// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPGameplay/Public/FirstPersonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacter() {}
// Cross Module References
	CPPGAMEPLAY_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	CPPGAMEPLAY_API UClass* Z_Construct_UClass_AFirstPersonCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CPPGameplay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	static FName NAME_AFirstPersonCharacter_GetMuzzleLocation = FName(TEXT("GetMuzzleLocation"));
	FVector AFirstPersonCharacter::GetMuzzleLocation()
	{
		FirstPersonCharacter_eventGetMuzzleLocation_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFirstPersonCharacter_GetMuzzleLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFirstPersonCharacter_PlayShootMontage = FName(TEXT("PlayShootMontage"));
	void AFirstPersonCharacter::PlayShootMontage()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFirstPersonCharacter_PlayShootMontage),NULL);
	}
	void AFirstPersonCharacter::StaticRegisterNativesAFirstPersonCharacter()
	{
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventGetMuzzleLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??\xca\xbe????\xcd\xbc?\xd0\xbf??\xd4\xb1?\xca\xb5??\n/// <summary>\n/// ????\xcd\xbc??\xca\xb5?\xd6\xb6??\xe5\xa3\xac?\xc3\xb5?????????\xc7\xb9?\xda\xb2??\xdb\xb5?\xce\xbb??\n/// </summary>\n/// <returns>????\xd2\xbb??\xce\xbb??</returns>\n" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "??\xca\xbe????\xcd\xbc?\xd0\xbf??\xd4\xb1?\xca\xb5??\n <summary>\n ????\xcd\xbc??\xca\xb5?\xd6\xb6??\xe5\xa3\xac?\xc3\xb5?????????\xc7\xb9?\xda\xb2??\xdb\xb5?\xce\xbb??\n </summary>\n <returns>????\xd2\xbb??\xce\xbb??</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "GetMuzzleLocation", nullptr, nullptr, sizeof(FirstPersonCharacter_eventGetMuzzleLocation_Parms), Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_PlayShootMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_PlayShootMontage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//??\xca\xbe????\xcd\xbc?\xd0\xbf??\xd4\xb1?\xca\xb5??\n/// <summary>\n/// ????\xcd\xbc??\xca\xb5?\xd6\xb6??\xe5\xa3\xac????????montage??????\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "??\xca\xbe????\xcd\xbc?\xd0\xbf??\xd4\xb1?\xca\xb5??\n <summary>\n ????\xcd\xbc??\xca\xb5?\xd6\xb6??\xe5\xa3\xac????????montage??????\n </summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_PlayShootMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "PlayShootMontage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_PlayShootMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_PlayShootMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_PlayShootMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_PlayShootMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShootTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootFXSP_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ShootFXSP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirstPersonCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonCharacter_GetMuzzleLocation, "GetMuzzleLocation" }, // 1837462526
		{ &Z_Construct_UFunction_AFirstPersonCharacter_PlayShootMontage, "PlayShootMontage" }, // 2683383037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FirstPersonCharacter.h" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ShootTraceChannel_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "Comment", "/// <summary>\n/// ??\xd7\xb2????\xcd\xa8??\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "<summary>\n??\xd7\xb2????\xcd\xa8??\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ShootTraceChannel = { "ShootTraceChannel", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, ShootTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ShootTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ShootTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ShootFXSP_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "Comment", "/// <summary>\n/// \xc4\xa3????????????\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ToolTip", "<summary>\n\xc4\xa3????????????\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ShootFXSP = { "ShootFXSP", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, ShootFXSP), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ShootFXSP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ShootFXSP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ShootTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_ShootFXSP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams = {
		&AFirstPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstPersonCharacter, 3673241182);
	template<> CPPGAMEPLAY_API UClass* StaticClass<AFirstPersonCharacter>()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonCharacter(Z_Construct_UClass_AFirstPersonCharacter, &AFirstPersonCharacter::StaticClass, TEXT("/Script/CPPGameplay"), TEXT("AFirstPersonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
