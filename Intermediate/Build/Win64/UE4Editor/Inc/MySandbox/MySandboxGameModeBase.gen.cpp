// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MySandbox/MySandboxGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySandboxGameModeBase() {}
// Cross Module References
	MYSANDBOX_API UClass* Z_Construct_UClass_AMySandboxGameModeBase_NoRegister();
	MYSANDBOX_API UClass* Z_Construct_UClass_AMySandboxGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MySandbox();
// End Cross Module References
	void AMySandboxGameModeBase::StaticRegisterNativesAMySandboxGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMySandboxGameModeBase_NoRegister()
	{
		return AMySandboxGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMySandboxGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMySandboxGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MySandbox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMySandboxGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MySandboxGameModeBase.h" },
		{ "ModuleRelativePath", "MySandboxGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMySandboxGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMySandboxGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMySandboxGameModeBase_Statics::ClassParams = {
		&AMySandboxGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMySandboxGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMySandboxGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMySandboxGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMySandboxGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMySandboxGameModeBase, 2374684468);
	template<> MYSANDBOX_API UClass* StaticClass<AMySandboxGameModeBase>()
	{
		return AMySandboxGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMySandboxGameModeBase(Z_Construct_UClass_AMySandboxGameModeBase, &AMySandboxGameModeBase::StaticClass, TEXT("/Script/MySandbox"), TEXT("AMySandboxGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMySandboxGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
