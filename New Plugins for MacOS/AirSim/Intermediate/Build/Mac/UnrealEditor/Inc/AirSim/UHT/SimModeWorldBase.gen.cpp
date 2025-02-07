// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimMode/SimModeWorldBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeWorldBase() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase();
AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldBase();
AIRSIM_API UClass* Z_Construct_UClass_ASimModeWorldBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class ASimModeWorldBase
void ASimModeWorldBase::StaticRegisterNativesASimModeWorldBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimModeWorldBase);
UClass* Z_Construct_UClass_ASimModeWorldBase_NoRegister()
{
	return ASimModeWorldBase::StaticClass();
}
struct Z_Construct_UClass_ASimModeWorldBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SimMode/SimModeWorldBase.h" },
		{ "ModuleRelativePath", "SimMode/SimModeWorldBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimModeWorldBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASimModeWorldBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASimModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeWorldBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimModeWorldBase_Statics::ClassParams = {
	&ASimModeWorldBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeWorldBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimModeWorldBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASimModeWorldBase()
{
	if (!Z_Registration_Info_UClass_ASimModeWorldBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimModeWorldBase.OuterSingleton, Z_Construct_UClass_ASimModeWorldBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimModeWorldBase.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<ASimModeWorldBase>()
{
	return ASimModeWorldBase::StaticClass();
}
ASimModeWorldBase::ASimModeWorldBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeWorldBase);
ASimModeWorldBase::~ASimModeWorldBase() {}
// End Class ASimModeWorldBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeWorldBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimModeWorldBase, ASimModeWorldBase::StaticClass, TEXT("ASimModeWorldBase"), &Z_Registration_Info_UClass_ASimModeWorldBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimModeWorldBase), 722671801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeWorldBase_h_3445712101(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeWorldBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeWorldBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
