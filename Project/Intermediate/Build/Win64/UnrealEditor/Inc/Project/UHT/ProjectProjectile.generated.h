// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECT_ProjectProjectile_generated_h
#error "ProjectProjectile.generated.h already included, missing '#pragma once' in ProjectProjectile.h"
#endif
#define PROJECT_ProjectProjectile_generated_h

#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectProjectile(); \
	friend struct Z_Construct_UClass_AProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project"), NO_API) \
	DECLARE_SERIALIZER(AProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectProjectile(AProjectProjectile&&); \
	AProjectProjectile(const AProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectProjectile) \
	NO_API virtual ~AProjectProjectile();


#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectProjectile_h_12_PROLOG
#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_API UClass* StaticClass<class AProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
