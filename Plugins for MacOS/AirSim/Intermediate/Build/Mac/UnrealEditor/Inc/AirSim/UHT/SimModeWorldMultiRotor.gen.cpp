// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicles/Multirotor/SimModeWorldMultiRotor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeWorldMultiRotor() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldBase();
AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldMultiRotor();
AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldMultiRotor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class ASimModeWorldMultiRotor
void ASimModeWorldMultiRotor::StaticRegisterNativesASimModeWorldMultiRotor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimModeWorldMultiRotor);
UClass* Z_Construct_UClass_ASimModeWorldMultiRotor_NoRegister()
{
	return ASimModeWorldMultiRotor::StaticClass();
}
struct Z_Construct_UClass_ASimModeWorldMultiRotor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicles/Multirotor/SimModeWorldMultiRotor.h" },
		{ "ModuleRelativePath", "Vehicles/Multirotor/SimModeWorldMultiRotor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimModeWorldMultiRotor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASimModeWorldBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::ClassParams = {
	&ASimModeWorldMultiRotor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASimModeWorldMultiRotor()
{
	if (!Z_Registration_Info_UClass_ASimModeWorldMultiRotor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimModeWorldMultiRotor.OuterSingleton, Z_Construct_UClass_ASimModeWorldMultiRotor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimModeWorldMultiRotor.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<ASimModeWorldMultiRotor>()
{
	return ASimModeWorldMultiRotor::StaticClass();
}
ASimModeWorldMultiRotor::ASimModeWorldMultiRotor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeWorldMultiRotor);
ASimModeWorldMultiRotor::~ASimModeWorldMultiRotor() {}
// End Class ASimModeWorldMultiRotor

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Vehicles_Multirotor_SimModeWorldMultiRotor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimModeWorldMultiRotor, ASimModeWorldMultiRotor::StaticClass, TEXT("ASimModeWorldMultiRotor"), &Z_Registration_Info_UClass_ASimModeWorldMultiRotor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimModeWorldMultiRotor), 1036308119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Vehicles_Multirotor_SimModeWorldMultiRotor_h_1856636720(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Vehicles_Multirotor_SimModeWorldMultiRotor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Vehicles_Multirotor_SimModeWorldMultiRotor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
