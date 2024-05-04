// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA__USFX_L01/NemesisNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNemesisNodriza() {}
// Cross Module References
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_ANemesisNodriza_NoRegister();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_ANemesisNodriza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA__USFX_L01();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UInterfaceBuilderNodriza_NoRegister();
// End Cross Module References
	void ANemesisNodriza::StaticRegisterNativesANemesisNodriza()
	{
	}
	UClass* Z_Construct_UClass_ANemesisNodriza_NoRegister()
	{
		return ANemesisNodriza::StaticClass();
	}
	struct Z_Construct_UClass_ANemesisNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANemesisNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA__USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANemesisNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NemesisNodriza.h" },
		{ "ModuleRelativePath", "NemesisNodriza.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANemesisNodriza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceBuilderNodriza_NoRegister, (int32)VTABLE_OFFSET(ANemesisNodriza, IInterfaceBuilderNodriza), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANemesisNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANemesisNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANemesisNodriza_Statics::ClassParams = {
		&ANemesisNodriza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANemesisNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANemesisNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANemesisNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANemesisNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANemesisNodriza, 3523623833);
	template<> GALAGA__USFX_L01_API UClass* StaticClass<ANemesisNodriza>()
	{
		return ANemesisNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANemesisNodriza(Z_Construct_UClass_ANemesisNodriza, &ANemesisNodriza::StaticClass, TEXT("/Script/GALAGA__USFX_L01"), TEXT("ANemesisNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANemesisNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
