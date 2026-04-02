// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AProjectCharacter;
#ifdef PROJECT_ProjectWeaponComponent_generated_h
#error "ProjectWeaponComponent.generated.h already included, missing '#pragma once' in ProjectWeaponComponent.h"
#endif
#define PROJECT_ProjectWeaponComponent_generated_h

#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectWeaponComponent(); \
	friend struct Z_Construct_UClass_UProjectWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UProjectWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project"), NO_API) \
	DECLARE_SERIALIZER(UProjectWeaponComponent)


#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProjectWeaponComponent(UProjectWeaponComponent&&); \
	UProjectWeaponComponent(const UProjectWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProjectWeaponComponent) \
	NO_API virtual ~UProjectWeaponComponent();


#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectWeaponComponent_h_11_PROLOG
#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_API UClass* StaticClass<class UProjectWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
