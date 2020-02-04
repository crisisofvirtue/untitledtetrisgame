// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UntitledTetrisLike/Private/BoardSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardSpawner() {}
// Cross Module References
	UNTITLEDTETRISLIKE_API UClass* Z_Construct_UClass_ABoardSpawner_NoRegister();
	UNTITLEDTETRISLIKE_API UClass* Z_Construct_UClass_ABoardSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UntitledTetrisLike();
// End Cross Module References
	void ABoardSpawner::StaticRegisterNativesABoardSpawner()
	{
	}
	UClass* Z_Construct_UClass_ABoardSpawner_NoRegister()
	{
		return ABoardSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ABoardSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoardSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UntitledTetrisLike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoardSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoardSpawner.h" },
		{ "ModuleRelativePath", "Private/BoardSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoardSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoardSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoardSpawner_Statics::ClassParams = {
		&ABoardSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABoardSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABoardSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoardSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoardSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoardSpawner, 1624356130);
	template<> UNTITLEDTETRISLIKE_API UClass* StaticClass<ABoardSpawner>()
	{
		return ABoardSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoardSpawner(Z_Construct_UClass_ABoardSpawner, &ABoardSpawner::StaticClass, TEXT("/Script/UntitledTetrisLike"), TEXT("ABoardSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoardSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
