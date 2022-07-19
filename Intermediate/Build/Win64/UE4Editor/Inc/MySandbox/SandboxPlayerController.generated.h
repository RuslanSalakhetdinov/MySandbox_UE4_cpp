// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSANDBOX_SandboxPlayerController_generated_h
#error "SandboxPlayerController.generated.h already included, missing '#pragma once' in SandboxPlayerController.h"
#endif
#define MYSANDBOX_SandboxPlayerController_generated_h

#define MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_SPARSE_DATA
#define MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_RPC_WRAPPERS
#define MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASandboxPlayerController(); \
	friend struct Z_Construct_UClass_ASandboxPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASandboxPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySandbox"), NO_API) \
	DECLARE_SERIALIZER(ASandboxPlayerController)


#define MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASandboxPlayerController(); \
	friend struct Z_Construct_UClass_ASandboxPlayerController_Statics; \
public: \
	DECLARE_CLASS(ASandboxPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MySandbox"), NO_API) \
	DECLARE_SERIALIZER(ASandboxPlayerController)


#define MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASandboxPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASandboxPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASandboxPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASandboxPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASandboxPlayerController(ASandboxPlayerController&&); \
	NO_API ASandboxPlayerController(const ASandboxPlayerController&); \
public:


#define MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASandboxPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASandboxPlayerController(ASandboxPlayerController&&); \
	NO_API ASandboxPlayerController(const ASandboxPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASandboxPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASandboxPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASandboxPlayerController)


#define MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Pawns() { return STRUCT_OFFSET(ASandboxPlayerController, Pawns); }


#define MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_12_PROLOG
#define MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_SPARSE_DATA \
	MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_RPC_WRAPPERS \
	MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_INCLASS \
	MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_SPARSE_DATA \
	MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	MySandbox_Source_MySandbox_Public_SandboxPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSANDBOX_API UClass* StaticClass<class ASandboxPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MySandbox_Source_MySandbox_Public_SandboxPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
