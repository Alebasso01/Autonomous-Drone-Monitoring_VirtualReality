// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicles/ComputerVision/SimModeComputerVision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeComputerVision() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase();
AIRSIM_API UClass* Z_Construct_UClass_ASimModeComputerVision();
AIRSIM_API UClass* Z_Construct_UClass_ASimModeComputerVision_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class ASimModeComputerVision
void ASimModeComputerVision::StaticRegisterNativesASimModeComputerVision()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimModeComputerVision);
UClass* Z_Construct_UClass_ASimModeComputerVision_NoRegister()
{
	return ASimModeComputerVision::StaticClass();
}
struct Z_Construct_UClass_ASimModeComputerVision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicles/ComputerVision/SimModeComputerVision.h" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/SimModeComputerVision.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimModeComputerVision>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASimModeComputerVision_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASimModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeComputerVision_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimModeComputerVision_Statics::ClassParams = {
	&ASimModeComputerVision::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeComputerVision_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimModeComputerVision_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASimModeComputerVision()
{
	if (!Z_Registration_Info_UClass_ASimModeComputerVision.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimModeComputerVision.OuterSingleton, Z_Construct_UClass_ASimModeComputerVision_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimModeComputerVision.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<ASimModeComputerVision>()
{
	return ASimModeComputerVision::StaticClass();
}
ASimModeComputerVision::ASimModeComputerVision() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeComputerVision);
ASimModeComputerVision::~ASimModeComputerVision() {}
// End Class ASimModeComputerVision

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_ComputerVision_SimModeComputerVision_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimModeComputerVision, ASimModeComputerVision::StaticClass, TEXT("ASimModeComputerVision"), &Z_Registration_Info_UClass_ASimModeComputerVision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimModeComputerVision), 876287826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_ComputerVision_SimModeComputerVision_h_1629892679(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_ComputerVision_SimModeComputerVision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_ComputerVision_SimModeComputerVision_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
