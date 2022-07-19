// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef MYSANDBOX_GeometryHubActor_generated_h
#error "GeometryHubActor.generated.h already included, missing '#pragma once' in GeometryHubActor.h"
#endif
#define MYSANDBOX_GeometryHubActor_generated_h

#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryPayload_Statics; \
	MYSANDBOX_API static class UScriptStruct* StaticStruct();


template<> MYSANDBOX_API UScriptStruct* StaticStruct<struct FGeometryPayload>();

#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_SPARSE_DATA
#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnColorChanged);


#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnColorChanged);


#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeometryHubActor(); \
	friend struct Z_Construct_UClass_AGeometryHubActor_Statics; \
public: \
	DECLARE_CLASS(AGeometryHubActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySandbox"), NO_API) \
	DECLARE_SERIALIZER(AGeometryHubActor)


#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAGeometryHubActor(); \
	friend struct Z_Construct_UClass_AGeometryHubActor_Statics; \
public: \
	DECLARE_CLASS(AGeometryHubActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySandbox"), NO_API) \
	DECLARE_SERIALIZER(AGeometryHubActor)


#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeometryHubActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeometryHubActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryHubActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryHubActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeometryHubActor(AGeometryHubActor&&); \
	NO_API AGeometryHubActor(const AGeometryHubActor&); \
public:


#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeometryHubActor(AGeometryHubActor&&); \
	NO_API AGeometryHubActor(const AGeometryHubActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeometryHubActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeometryHubActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGeometryHubActor)


#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryClass() { return STRUCT_OFFSET(AGeometryHubActor, GeometryClass); } \
	FORCEINLINE static uint32 __PPO__GeometryPayloads() { return STRUCT_OFFSET(AGeometryHubActor, GeometryPayloads); } \
	FORCEINLINE static uint32 __PPO__PropertyActor() { return STRUCT_OFFSET(AGeometryHubActor, PropertyActor); }


#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_25_PROLOG
#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_PRIVATE_PROPERTY_OFFSET \
	MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_SPARSE_DATA \
	MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_RPC_WRAPPERS \
	MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_INCLASS \
	MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_PRIVATE_PROPERTY_OFFSET \
	MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_SPARSE_DATA \
	MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_INCLASS_NO_PURE_DECLS \
	MySandbox_Source_MySandbox_Public_GeometryHubActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSANDBOX_API UClass* StaticClass<class AGeometryHubActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MySandbox_Source_MySandbox_Public_GeometryHubActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
