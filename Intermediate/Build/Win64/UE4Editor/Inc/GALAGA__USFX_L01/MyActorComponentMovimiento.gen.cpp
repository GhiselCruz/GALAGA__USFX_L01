// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA__USFX_L01/MyActorComponentMovimiento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorComponentMovimiento() {}
// Cross Module References
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UMyActorComponentMovimiento_NoRegister();
	GALAGA__USFX_L01_API UClass* Z_Construct_UClass_UMyActorComponentMovimiento();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GALAGA__USFX_L01();
// End Cross Module References
	void UMyActorComponentMovimiento::StaticRegisterNativesUMyActorComponentMovimiento()
	{
	}
	UClass* Z_Construct_UClass_UMyActorComponentMovimiento_NoRegister()
	{
		return UMyActorComponentMovimiento::StaticClass();
	}
	struct Z_Construct_UClass_UMyActorComponentMovimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Movimiento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyActorComponentMovimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA__USFX_L01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyActorComponentMovimiento_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyActorComponentMovimiento.h" },
		{ "ModuleRelativePath", "MyActorComponentMovimiento.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyActorComponentMovimiento_Statics::NewProp_Movimiento_MetaData[] = {
		{ "ModuleRelativePath", "MyActorComponentMovimiento.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyActorComponentMovimiento_Statics::NewProp_Movimiento = { "Movimiento", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyActorComponentMovimiento, Movimiento), METADATA_PARAMS(Z_Construct_UClass_UMyActorComponentMovimiento_Statics::NewProp_Movimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponentMovimiento_Statics::NewProp_Movimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyActorComponentMovimiento_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyActorComponentMovimiento_Statics::NewProp_Movimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyActorComponentMovimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyActorComponentMovimiento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyActorComponentMovimiento_Statics::ClassParams = {
		&UMyActorComponentMovimiento::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyActorComponentMovimiento_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponentMovimiento_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyActorComponentMovimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponentMovimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyActorComponentMovimiento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyActorComponentMovimiento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyActorComponentMovimiento, 1188072967);
	template<> GALAGA__USFX_L01_API UClass* StaticClass<UMyActorComponentMovimiento>()
	{
		return UMyActorComponentMovimiento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyActorComponentMovimiento(Z_Construct_UClass_UMyActorComponentMovimiento, &UMyActorComponentMovimiento::StaticClass, TEXT("/Script/GALAGA__USFX_L01"), TEXT("UMyActorComponentMovimiento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyActorComponentMovimiento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
