// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA__USFX_L01/InfernoNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfernoNodriza() {}
// Cross Module References
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_AInfernoNodriza_NoRegister();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_AInfernoNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA__USFX_L01();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UInterfaceBuilderNodriza_NoRegister();
// End Cross Module References
	void AInfernoNodriza::StaticRegisterNativesAInfernoNodriza()
	{
	}
	UClass* Z_Construct_UClass_AInfernoNodriza_NoRegister()
	{
		return AInfernoNodriza::StaticClass();
	}
	struct Z_Construct_UClass_AInfernoNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInfernoNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA__USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInfernoNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InfernoNodriza.h" },
		{ "ModuleRelativePath", "InfernoNodriza.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInfernoNodriza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceBuilderNodriza_NoRegister, (int32)VTABLE_OFFSET(AInfernoNodriza, IInterfaceBuilderNodriza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInfernoNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInfernoNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInfernoNodriza_Statics::ClassParams = {
		&AInfernoNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInfernoNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInfernoNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInfernoNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInfernoNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInfernoNodriza, 2010591201);
	template<> GALAGA__USFX_L01_API UClass* StaticClass<AInfernoNodriza>()
	{
		return AInfernoNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInfernoNodriza(Z_Construct_UClass_AInfernoNodriza, &AInfernoNodriza::StaticClass, TEXT("/Script/GALAGA__USFX_L01"), TEXT("AInfernoNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInfernoNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
