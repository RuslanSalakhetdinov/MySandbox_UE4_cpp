// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSANDBOX_BaseGeometryActor_generated_h
#error "BaseGeometryActor.generated.h already included, missing '#pragma once' in BaseGeometryActor.h"
#endif
#define MYSANDBOX_BaseGeometryActor_generated_h

#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryData_Statics; \
	MYSANDBOX_API static class UScriptStruct* StaticStruct();


template<> MYSANDBOX_API UScriptStruct* StaticStruct<struct FGeometryData>();

#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_SPARSE_DATA
#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_RPC_WRAPPERS
#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGeometryActor(); \
	friend struct Z_Construct_UClass_ABaseGeometryActor_Statics; \
public: \
	DECLARE_CLASS(ABaseGeometryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySandbox"), NO_API) \
	DECLARE_SERIALIZER(ABaseGeometryActor)


#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_INCLASS \
private: \
	static void StaticRegisterNativesABaseGeometryActor(); \
	friend struct Z_Construct_UClass_ABaseGeometryActor_Statics; \
public: \
	DECLARE_CLASS(ABaseGeometryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySandbox"), NO_API) \
	DECLARE_SERIALIZER(ABaseGeometryActor)


#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGeometryActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGeometryActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGeometryActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGeometryActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGeometryActor(ABaseGeometryActor&&); \
	NO_API ABaseGeometryActor(const ABaseGeometryActor&); \
public:


#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGeometryActor(ABaseGeometryActor&&); \
	NO_API ABaseGeometryActor(const ABaseGeometryActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGeometryActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGeometryActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGeometryActor)


#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryData() { return STRUCT_OFFSET(ABaseGeometryActor, GeometryData); } \
	FORCEINLINE static uint32 __PPO__WeaponsNum() { return STRUCT_OFFSET(ABaseGeometryActor, WeaponsNum); } \
	FORCEINLINE static uint32 __PPO__KillsNum() { return STRUCT_OFFSET(ABaseGeometryActor, KillsNum); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ABaseGeometryActor, Health); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(ABaseGeometryActor, IsDead); } \
	FORCEINLINE static uint32 __PPO__HasWeapon() { return STRUCT_OFFSET(ABaseGeometryActor, HasWeapon); }


#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_35_PROLOG
#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_PRIVATE_PROPERTY_OFFSET \
	MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_SPARSE_DATA \
	MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_RPC_WRAPPERS \
	MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_INCLASS \
	MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_PRIVATE_PROPERTY_OFFSET \
	MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_SPARSE_DATA \
	MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_INCLASS_NO_PURE_DECLS \
	MySandbox_Source_MySandbox_Public_BaseGeometryActor_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSANDBOX_API UClass* StaticClass<class ABaseGeometryActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MySandbox_Source_MySandbox_Public_BaseGeometryActor_h


#define FOREACH_ENUM_EMOVEMENTTYPE(op) \
	op(EMovementType::Sin) \
	op(EMovementType::Static) 

enum class EMovementType : uint8;
template<> MYSANDBOX_API UEnum* StaticEnum<EMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
