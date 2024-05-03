// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA__USFX_L01/InterfaceBuilderNodriza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceBuilderNodriza() {}
// Cross Module References
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UInterfaceBuilderNodriza_NoRegister();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UInterfaceBuilderNodriza();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA__USFX_L01();
// End Cross Module References
	void UInterfaceBuilderNodriza::StaticRegisterNativesUInterfaceBuilderNodriza()
	{
	}
	UClass* Z_Construct_UClass_UInterfaceBuilderNodriza_NoRegister()
	{
		return UInterfaceBuilderNodriza::StaticClass();
	}
	struct Z_Construct_UClass_UInterfaceBuilderNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfaceBuilderNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA__USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfaceBuilderNodriza_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfaceBuilderNodriza.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfaceBuilderNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfaceBuilderNodriza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterfaceBuilderNodriza_Statics::ClassParams = {
		&UInterfaceBuilderNodriza::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterfaceBuilderNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceBuilderNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterfaceBuilderNodriza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterfaceBuilderNodriza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterfaceBuilderNodriza, 1090367774);
	template<> GALAGA__USFX_L01_API UClass* StaticClass<UInterfaceBuilderNodriza>()
	{
		return UInterfaceBuilderNodriza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterfaceBuilderNodriza(Z_Construct_UClass_UInterfaceBuilderNodriza, &UInterfaceBuilderNodriza::StaticClass, TEXT("/Script/GALAGA__USFX_L01"), TEXT("UInterfaceBuilderNodriza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfaceBuilderNodriza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
