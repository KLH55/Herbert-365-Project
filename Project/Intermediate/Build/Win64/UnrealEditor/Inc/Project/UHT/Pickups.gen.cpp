// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project/Pickups.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickups() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROJECT_API UClass* Z_Construct_UClass_APickups();
PROJECT_API UClass* Z_Construct_UClass_APickups_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project();
// End Cross Module References

// Begin Class APickups
void APickups::StaticRegisterNativesAPickups()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickups);
UClass* Z_Construct_UClass_APickups_NoRegister()
{
	return APickups::StaticClass();
}
struct Z_Construct_UClass_APickups_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pickups.h" },
		{ "ModuleRelativePath", "Pickups.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickups>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APickups_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickups_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APickups_Statics::ClassParams = {
	&APickups::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickups_Statics::Class_MetaDataParams), Z_Construct_UClass_APickups_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APickups()
{
	if (!Z_Registration_Info_UClass_APickups.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickups.OuterSingleton, Z_Construct_UClass_APickups_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APickups.OuterSingleton;
}
template<> PROJECT_API UClass* StaticClass<APickups>()
{
	return APickups::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APickups);
APickups::~APickups() {}
// End Class APickups

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_Pickups_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APickups, APickups::StaticClass, TEXT("APickups"), &Z_Registration_Info_UClass_APickups, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickups), 1020720985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_Pickups_h_1672754691(TEXT("/Script/Project"),
	Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_Pickups_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_Pickups_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
