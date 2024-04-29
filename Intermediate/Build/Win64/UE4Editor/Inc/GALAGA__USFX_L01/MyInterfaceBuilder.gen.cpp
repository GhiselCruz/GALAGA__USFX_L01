// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA__USFX_L01/MyInterfaceBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInterfaceBuilder() {}
// Cross Module References
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UMyInterfaceBuilder_NoRegister();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UMyInterfaceBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GALAGA__USFX_L01();
// End Cross Module References
	void UMyInterfaceBuilder::StaticRegisterNativesUMyInterfaceBuilder()
	{
	}
	UClass* Z_Construct_UClass_UMyInterfaceBuilder_NoRegister()
	{
		return UMyInterfaceBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMyInterfaceBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyInterfaceBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA__USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyInterfaceBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInterfaceBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyInterfaceBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMyInterfaceBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyInterfaceBuilder_Statics::ClassParams = {
		&UMyInterfaceBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyInterfaceBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyInterfaceBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyInterfaceBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyInterfaceBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyInterfaceBuilder, 1562214949);
	template<> GALAGA__USFX_L01_API UClass* StaticClass<UMyInterfaceBuilder>()
	{
		return UMyInterfaceBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyInterfaceBuilder(Z_Construct_UClass_UMyInterfaceBuilder, &UMyInterfaceBuilder::StaticClass, TEXT("/Script/GALAGA__USFX_L01"), TEXT("UMyInterfaceBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInterfaceBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
