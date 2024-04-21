// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA__USFX_L01/MySceneComponentBarrera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySceneComponentBarrera() {}
// Cross Module References
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UMySceneComponentBarrera_NoRegister();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UMySceneComponentBarrera();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_GALAGA__USFX_L01();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UMySceneComponentBarrera::StaticRegisterNativesUMySceneComponentBarrera()
	{
	}
	UClass* Z_Construct_UClass_UMySceneComponentBarrera_NoRegister()
	{
		return UMySceneComponentBarrera::StaticClass();
	}
	struct Z_Construct_UClass_UMySceneComponentBarrera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarreraToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BarreraToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySceneComponentBarrera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA__USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySceneComponentBarrera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MySceneComponentBarrera.h" },
		{ "ModuleRelativePath", "MySceneComponentBarrera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySceneComponentBarrera_Statics::NewProp_BarreraToSpawn_MetaData[] = {
		{ "Category", "MySceneComponentBarrera" },
		{ "ModuleRelativePath", "MySceneComponentBarrera.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMySceneComponentBarrera_Statics::NewProp_BarreraToSpawn = { "BarreraToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMySceneComponentBarrera, BarreraToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMySceneComponentBarrera_Statics::NewProp_BarreraToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMySceneComponentBarrera_Statics::NewProp_BarreraToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMySceneComponentBarrera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMySceneComponentBarrera_Statics::NewProp_BarreraToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySceneComponentBarrera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySceneComponentBarrera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMySceneComponentBarrera_Statics::ClassParams = {
		&UMySceneComponentBarrera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMySceneComponentBarrera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMySceneComponentBarrera_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMySceneComponentBarrera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySceneComponentBarrera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySceneComponentBarrera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMySceneComponentBarrera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMySceneComponentBarrera, 2645701445);
	template<> GALAGA__USFX_L01_API UClass* StaticClass<UMySceneComponentBarrera>()
	{
		return UMySceneComponentBarrera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMySceneComponentBarrera(Z_Construct_UClass_UMySceneComponentBarrera, &UMySceneComponentBarrera::StaticClass, TEXT("/Script/GALAGA__USFX_L01"), TEXT("UMySceneComponentBarrera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySceneComponentBarrera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
