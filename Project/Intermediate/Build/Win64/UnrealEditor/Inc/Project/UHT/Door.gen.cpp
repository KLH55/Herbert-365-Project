// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project/Door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECT_API UClass* Z_Construct_UClass_ADoor();
PROJECT_API UClass* Z_Construct_UClass_ADoor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project();
// End Cross Module References

// Begin Class ADoor Function Interact
struct Z_Construct_UFunction_ADoor_Interact_Statics
{
	struct Door_eventInteract_Parms
	{
		AActor* InteractingActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoor_Interact_Statics::NewProp_InteractingActor = { "InteractingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Door_eventInteract_Parms, InteractingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoor_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoor_Interact_Statics::NewProp_InteractingActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_ADoor_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_Interact_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADoor_Interact_Statics::Door_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADoor_Interact_Statics::Door_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADoor_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADoor::execInteract)
{
	P_GET_OBJECT(AActor,Z_Param_InteractingActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact(Z_Param_InteractingActor);
	P_NATIVE_END;
}
// End Class ADoor Function Interact

// Begin Class ADoor Function OpenDoor
static const FName NAME_ADoor_OpenDoor = FName(TEXT("OpenDoor"));
void ADoor::OpenDoor()
{
	UFunction* Func = FindFunctionChecked(NAME_ADoor_OpenDoor);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ADoor_OpenDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoor, nullptr, "OpenDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADoor_OpenDoor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADoor_OpenDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoor_OpenDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ADoor Function OpenDoor

// Begin Class ADoor
void ADoor::StaticRegisterNativesADoor()
{
	UClass* Class = ADoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &ADoor::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoor);
UClass* Z_Construct_UClass_ADoor_NoRegister()
{
	return ADoor::StaticClass();
}
struct Z_Construct_UClass_ADoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Door.h" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredItems_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Door.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Door.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredItems;
	static void NewProp_bIsOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoor_Interact, "Interact" }, // 265856271
		{ &Z_Construct_UFunction_ADoor_OpenDoor, "OpenDoor" }, // 746631855
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_RequiredItems = { "RequiredItems", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADoor, RequiredItems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredItems_MetaData), NewProp_RequiredItems_MetaData) };
void Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen_SetBit(void* Obj)
{
	((ADoor*)Obj)->bIsOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADoor), &Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOpen_MetaData), NewProp_bIsOpen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_RequiredItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoor_Statics::NewProp_bIsOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoor_Statics::ClassParams = {
	&ADoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADoor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADoor()
{
	if (!Z_Registration_Info_UClass_ADoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoor.OuterSingleton, Z_Construct_UClass_ADoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADoor.OuterSingleton;
}
template<> PROJECT_API UClass* StaticClass<ADoor>()
{
	return ADoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADoor);
ADoor::~ADoor() {}
// End Class ADoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_Door_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADoor, ADoor::StaticClass, TEXT("ADoor"), &Z_Registration_Info_UClass_ADoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoor), 3859531668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_Door_h_175202927(TEXT("/Script/Project"),
	Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_Door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thumm_Documents_GitHub_Herbert_365_Project_Project_Source_Project_Door_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
