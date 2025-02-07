// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManualPoseController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManualPoseController() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_UManualPoseController();
AIRSIM_API UClass* Z_Construct_UClass_UManualPoseController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class UManualPoseController
void UManualPoseController::StaticRegisterNativesUManualPoseController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManualPoseController);
UClass* Z_Construct_UClass_UManualPoseController_NoRegister()
{
	return UManualPoseController::StaticClass();
}
struct Z_Construct_UClass_UManualPoseController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ManualPoseController.h" },
		{ "ModuleRelativePath", "ManualPoseController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManualPoseController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UManualPoseController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UManualPoseController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UManualPoseController_Statics::ClassParams = {
	&UManualPoseController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UManualPoseController_Statics::Class_MetaDataParams), Z_Construct_UClass_UManualPoseController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UManualPoseController()
{
	if (!Z_Registration_Info_UClass_UManualPoseController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManualPoseController.OuterSingleton, Z_Construct_UClass_UManualPoseController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UManualPoseController.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<UManualPoseController>()
{
	return UManualPoseController::StaticClass();
}
UManualPoseController::UManualPoseController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UManualPoseController);
UManualPoseController::~UManualPoseController() {}
// End Class UManualPoseController

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_ManualPoseController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UManualPoseController, UManualPoseController::StaticClass, TEXT("UManualPoseController"), &Z_Registration_Info_UClass_UManualPoseController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManualPoseController), 1582497600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_ManualPoseController_h_3727602883(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_ManualPoseController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_ManualPoseController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
