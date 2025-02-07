// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicles/Car/CarWheelRear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarWheelRear() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_UCarWheelRear();
AIRSIM_API UClass* Z_Construct_UClass_UCarWheelRear_NoRegister();
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class UCarWheelRear
void UCarWheelRear::StaticRegisterNativesUCarWheelRear()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCarWheelRear);
UClass* Z_Construct_UClass_UCarWheelRear_NoRegister()
{
	return UCarWheelRear::StaticClass();
}
struct Z_Construct_UClass_UCarWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicles/Car/CarWheelRear.h" },
		{ "ModuleRelativePath", "Vehicles/Car/CarWheelRear.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCarWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCarWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCarWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCarWheelRear_Statics::ClassParams = {
	&UCarWheelRear::StaticClass,
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
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCarWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UCarWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCarWheelRear()
{
	if (!Z_Registration_Info_UClass_UCarWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCarWheelRear.OuterSingleton, Z_Construct_UClass_UCarWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCarWheelRear.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<UCarWheelRear>()
{
	return UCarWheelRear::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCarWheelRear);
UCarWheelRear::~UCarWheelRear() {}
// End Class UCarWheelRear

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarWheelRear_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCarWheelRear, UCarWheelRear::StaticClass, TEXT("UCarWheelRear"), &Z_Registration_Info_UClass_UCarWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCarWheelRear), 1667056784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarWheelRear_h_732165766(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarWheelRear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarWheelRear_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
