// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AirSimGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirSimGameMode() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_AAirSimGameMode();
AIRSIM_API UClass* Z_Construct_UClass_AAirSimGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class AAirSimGameMode
void AAirSimGameMode::StaticRegisterNativesAAirSimGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAirSimGameMode);
UClass* Z_Construct_UClass_AAirSimGameMode_NoRegister()
{
	return AAirSimGameMode::StaticClass();
}
struct Z_Construct_UClass_AAirSimGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AirSimGameMode.h" },
		{ "ModuleRelativePath", "AirSimGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirSimGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAirSimGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAirSimGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAirSimGameMode_Statics::ClassParams = {
	&AAirSimGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAirSimGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAirSimGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAirSimGameMode()
{
	if (!Z_Registration_Info_UClass_AAirSimGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAirSimGameMode.OuterSingleton, Z_Construct_UClass_AAirSimGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAirSimGameMode.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<AAirSimGameMode>()
{
	return AAirSimGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAirSimGameMode);
AAirSimGameMode::~AAirSimGameMode() {}
// End Class AAirSimGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_AirSimGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAirSimGameMode, AAirSimGameMode::StaticClass, TEXT("AAirSimGameMode"), &Z_Registration_Info_UClass_AAirSimGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAirSimGameMode), 4280450768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_AirSimGameMode_h_3966224570(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_AirSimGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_AirSimGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
