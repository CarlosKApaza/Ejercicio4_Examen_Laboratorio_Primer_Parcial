// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExamenLAB/ExamenLABGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExamenLABGameMode() {}
// Cross Module References
	EXAMENLAB_API UClass* Z_Construct_UClass_AExamenLABGameMode_NoRegister();
	EXAMENLAB_API UClass* Z_Construct_UClass_AExamenLABGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ExamenLAB();
// End Cross Module References
	void AExamenLABGameMode::StaticRegisterNativesAExamenLABGameMode()
	{
	}
	UClass* Z_Construct_UClass_AExamenLABGameMode_NoRegister()
	{
		return AExamenLABGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AExamenLABGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExamenLABGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ExamenLAB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExamenLABGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// declaramos la clase ABomba\n" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ExamenLABGameMode.h" },
		{ "ModuleRelativePath", "ExamenLABGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "declaramos la clase ABomba" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExamenLABGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExamenLABGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExamenLABGameMode_Statics::ClassParams = {
		&AExamenLABGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExamenLABGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExamenLABGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExamenLABGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExamenLABGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExamenLABGameMode, 2140130684);
	template<> EXAMENLAB_API UClass* StaticClass<AExamenLABGameMode>()
	{
		return AExamenLABGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExamenLABGameMode(Z_Construct_UClass_AExamenLABGameMode, &AExamenLABGameMode::StaticClass, TEXT("/Script/ExamenLAB"), TEXT("AExamenLABGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExamenLABGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
