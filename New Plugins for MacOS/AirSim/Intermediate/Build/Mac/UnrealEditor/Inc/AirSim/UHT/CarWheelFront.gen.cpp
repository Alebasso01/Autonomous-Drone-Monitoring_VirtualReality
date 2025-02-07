// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicles/Car/CarWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarWheelFront() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_UCarWheelFront();
AIRSIM_API UClass* Z_Construct_UClass_UCarWheelFront_NoRegister();
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class UCarWheelFront
void UCarWheelFront::StaticRegisterNativesUCarWheelFront()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCarWheelFront);
UClass* Z_Construct_UClass_UCarWheelFront_NoRegister()
{
	return UCarWheelFront::StaticClass();
}
struct Z_Construct_UClass_UCarWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicles/Car/CarWheelFront.h" },
		{ "ModuleRelativePath", "Vehicles/Car/CarWheelFront.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCarWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCarWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCarWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCarWheelFront_Statics::ClassParams = {
	&UCarWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCarWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UCarWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCarWheelFront()
{
	if (!Z_Registration_Info_UClass_UCarWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCarWheelFront.OuterSingleton, Z_Construct_UClass_UCarWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCarWheelFront.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<UCarWheelFront>()
{
	return UCarWheelFront::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCarWheelFront);
UCarWheelFront::~UCarWheelFront() {}
// End Class UCarWheelFront

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarWheelFront_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCarWheelFront, UCarWheelFront::StaticClass, TEXT("UCarWheelFront"), &Z_Registration_Info_UClass_UCarWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCarWheelFront), 2551602140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarWheelFront_h_2461204668(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarWheelFront_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
