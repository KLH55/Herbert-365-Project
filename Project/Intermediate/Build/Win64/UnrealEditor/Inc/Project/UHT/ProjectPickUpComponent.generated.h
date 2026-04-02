// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AProjectCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECT_ProjectPickUpComponent_generated_h
#error "ProjectPickUpComponent.generated.h already included, missing '#pragma once' in ProjectPickUpComponent.h"
#endif
#define PROJECT_ProjectPickUpComponent_generated_h

#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectPickUpComponent_h_12_DELEGATE \
PROJECT_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AProjectCharacter* PickUpCharacter);


#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectPickUpComponent(); \
	friend struct Z_Construct_UClass_UProjectPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UProjectPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project"), NO_API) \
	DECLARE_SERIALIZER(UProjectPickUpComponent)


#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UProjectPickUpComponent(UProjectPickUpComponent&&); \
	UProjectPickUpComponent(const UProjectPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProjectPickUpComponent) \
	NO_API virtual ~UProjectPickUpComponent();


#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectPickUpComponent_h_14_PROLOG
#define FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_API UClass* StaticClass<class UProjectPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
