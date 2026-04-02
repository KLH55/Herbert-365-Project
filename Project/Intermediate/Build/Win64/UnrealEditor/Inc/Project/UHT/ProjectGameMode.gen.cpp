// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project/ProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECT_API UClass* Z_Construct_UClass_AProjectGameMode();
PROJECT_API UClass* Z_Construct_UClass_AProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project();
// End Cross Module References

// Begin Class AProjectGameMode
void AProjectGameMode::StaticRegisterNativesAProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectGameMode);
UClass* Z_Construct_UClass_AProjectGameMode_NoRegister()
{
	return AProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectGameMode.h" },
		{ "ModuleRelativePath", "ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectGameMode_Statics::ClassParams = {
	&AProjectGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectGameMode.OuterSingleton, Z_Construct_UClass_AProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectGameMode.OuterSingleton;
}
template<> PROJECT_API UClass* StaticClass<AProjectGameMode>()
{
	return AProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectGameMode);
AProjectGameMode::~AProjectGameMode() {}
// End Class AProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectGameMode, AProjectGameMode::StaticClass, TEXT("AProjectGameMode"), &Z_Registration_Info_UClass_AProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectGameMode), 776759540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectGameMode_h_3076900218(TEXT("/Script/Project"),
	Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_ProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
