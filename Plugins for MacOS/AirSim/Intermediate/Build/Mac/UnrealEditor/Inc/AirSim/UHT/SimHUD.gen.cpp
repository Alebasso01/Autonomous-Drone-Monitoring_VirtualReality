// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimHUD/SimHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimHUD() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_ASimHUD();
AIRSIM_API UClass* Z_Construct_UClass_ASimHUD_NoRegister();
AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase_NoRegister();
AIRSIM_API UClass* Z_Construct_UClass_USimHUDWidget_NoRegister();
AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_ESimulatorMode();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Enum ESimulatorMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimulatorMode;
static UEnum* ESimulatorMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimulatorMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimulatorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AirSim_ESimulatorMode, (UObject*)Z_Construct_UPackage__Script_AirSim(), TEXT("ESimulatorMode"));
	}
	return Z_Registration_Info_UEnum_ESimulatorMode.OuterSingleton;
}
template<> AIRSIM_API UEnum* StaticEnum<ESimulatorMode>()
{
	return ESimulatorMode_StaticEnum();
}
struct Z_Construct_UEnum_AirSim_ESimulatorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
		{ "SIM_MODE_HIL.DisplayName", "Hardware-in-loop" },
		{ "SIM_MODE_HIL.Name", "ESimulatorMode::SIM_MODE_HIL" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimulatorMode::SIM_MODE_HIL", (int64)ESimulatorMode::SIM_MODE_HIL },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AirSim_ESimulatorMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
	nullptr,
	"ESimulatorMode",
	"ESimulatorMode",
	Z_Construct_UEnum_AirSim_ESimulatorMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AirSim_ESimulatorMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AirSim_ESimulatorMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AirSim_ESimulatorMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AirSim_ESimulatorMode()
{
	if (!Z_Registration_Info_UEnum_ESimulatorMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimulatorMode.InnerSingleton, Z_Construct_UEnum_AirSim_ESimulatorMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimulatorMode.InnerSingleton;
}
// End Enum ESimulatorMode

// Begin Class ASimHUD
void ASimHUD::StaticRegisterNativesASimHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimHUD);
UClass* Z_Construct_UClass_ASimHUD_NoRegister()
{
	return ASimHUD::StaticClass();
}
struct Z_Construct_UClass_ASimHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SimHUD/SimHUD.h" },
		{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widget__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_simmode__MetaData[] = {
		{ "ModuleRelativePath", "SimHUD/SimHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widget_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_simmode_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimHUD_Statics::NewProp_widget_ = { "widget_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimHUD, widget_), Z_Construct_UClass_USimHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widget__MetaData), NewProp_widget__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimHUD_Statics::NewProp_simmode_ = { "simmode_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimHUD, simmode_), Z_Construct_UClass_ASimModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_simmode__MetaData), NewProp_simmode__MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimHUD_Statics::NewProp_widget_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimHUD_Statics::NewProp_simmode_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASimHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimHUD_Statics::ClassParams = {
	&ASimHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASimHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASimHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASimHUD()
{
	if (!Z_Registration_Info_UClass_ASimHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimHUD.OuterSingleton, Z_Construct_UClass_ASimHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimHUD.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<ASimHUD>()
{
	return ASimHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASimHUD);
ASimHUD::~ASimHUD() {}
// End Class ASimHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_SimHUD_SimHUD_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESimulatorMode_StaticEnum, TEXT("ESimulatorMode"), &Z_Registration_Info_UEnum_ESimulatorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 478354622U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimHUD, ASimHUD::StaticClass, TEXT("ASimHUD"), &Z_Registration_Info_UClass_ASimHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimHUD), 2845521243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_SimHUD_SimHUD_h_2920666128(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_SimHUD_SimHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_SimHUD_SimHUD_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_SimHUD_SimHUD_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_SimHUD_SimHUD_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
