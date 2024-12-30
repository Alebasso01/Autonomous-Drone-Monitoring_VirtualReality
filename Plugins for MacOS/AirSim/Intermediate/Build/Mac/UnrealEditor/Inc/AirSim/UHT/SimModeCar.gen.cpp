// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicles/Car/SimModeCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeCar() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase();
AIRSIM_API UClass* Z_Construct_UClass_ASimModeCar();
AIRSIM_API UClass* Z_Construct_UClass_ASimModeCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class ASimModeCar
void ASimModeCar::StaticRegisterNativesASimModeCar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimModeCar);
UClass* Z_Construct_UClass_ASimModeCar_NoRegister()
{
	return ASimModeCar::StaticClass();
}
struct Z_Construct_UClass_ASimModeCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicles/Car/SimModeCar.h" },
		{ "ModuleRelativePath", "Vehicles/Car/SimModeCar.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimModeCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASimModeCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASimModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimModeCar_Statics::ClassParams = {
	&ASimModeCar::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeCar_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimModeCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASimModeCar()
{
	if (!Z_Registration_Info_UClass_ASimModeCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimModeCar.OuterSingleton, Z_Construct_UClass_ASimModeCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimModeCar.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<ASimModeCar>()
{
	return ASimModeCar::StaticClass();
}
ASimModeCar::ASimModeCar() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeCar);
ASimModeCar::~ASimModeCar() {}
// End Class ASimModeCar

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Vehicles_Car_SimModeCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimModeCar, ASimModeCar::StaticClass, TEXT("ASimModeCar"), &Z_Registration_Info_UClass_ASimModeCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimModeCar), 597238899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Vehicles_Car_SimModeCar_h_2516609917(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Vehicles_Car_SimModeCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Vehicles_Car_SimModeCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
