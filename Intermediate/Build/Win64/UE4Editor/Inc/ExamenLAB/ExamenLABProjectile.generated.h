// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef EXAMENLAB_ExamenLABProjectile_generated_h
#error "ExamenLABProjectile.generated.h already included, missing '#pragma once' in ExamenLABProjectile.h"
#endif
#define EXAMENLAB_ExamenLABProjectile_generated_h

#define ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_SPARSE_DATA
#define ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExamenLABProjectile(); \
	friend struct Z_Construct_UClass_AExamenLABProjectile_Statics; \
public: \
	DECLARE_CLASS(AExamenLABProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExamenLAB"), NO_API) \
	DECLARE_SERIALIZER(AExamenLABProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAExamenLABProjectile(); \
	friend struct Z_Construct_UClass_AExamenLABProjectile_Statics; \
public: \
	DECLARE_CLASS(AExamenLABProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExamenLAB"), NO_API) \
	DECLARE_SERIALIZER(AExamenLABProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExamenLABProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExamenLABProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExamenLABProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExamenLABProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExamenLABProjectile(AExamenLABProjectile&&); \
	NO_API AExamenLABProjectile(const AExamenLABProjectile&); \
public:


#define ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExamenLABProjectile(AExamenLABProjectile&&); \
	NO_API AExamenLABProjectile(const AExamenLABProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExamenLABProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExamenLABProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExamenLABProjectile)


#define ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AExamenLABProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AExamenLABProjectile, ProjectileMovement); }


#define ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_12_PROLOG
#define ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_SPARSE_DATA \
	ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_RPC_WRAPPERS \
	ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_INCLASS \
	ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_SPARSE_DATA \
	ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_INCLASS_NO_PURE_DECLS \
	ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXAMENLAB_API UClass* StaticClass<class AExamenLABProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ExamenLAB_Source_ExamenLAB_ExamenLABProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
