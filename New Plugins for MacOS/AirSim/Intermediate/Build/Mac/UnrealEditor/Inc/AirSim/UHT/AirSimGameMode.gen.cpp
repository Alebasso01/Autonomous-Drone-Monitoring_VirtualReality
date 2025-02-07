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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
IPLOM_API UClass* Z_Construct_UClass_AOilRefinery_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefineryClass_MetaData[] = {
		{ "Category", "AirSimGameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//private:\n//UGameUserSettings* GetGameUserSettings();\n" },
#endif
		{ "ModuleRelativePath", "AirSimGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "private:\nUGameUserSettings* GetGameUserSettings();" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedRefinery_MetaData[] = {
		{ "Category", "AirSimGameMode" },
		{ "ModuleRelativePath", "AirSimGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedDrone_MetaData[] = {
		{ "Category", "AirSimGameMode" },
		{ "ModuleRelativePath", "AirSimGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_RefineryClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedRefinery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedDrone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirSimGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAirSimGameMode_Statics::NewProp_RefineryClass = { "RefineryClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirSimGameMode, RefineryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AOilRefinery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefineryClass_MetaData), NewProp_RefineryClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirSimGameMode_Statics::NewProp_SpawnedRefinery = { "SpawnedRefinery", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirSimGameMode, SpawnedRefinery), Z_Construct_UClass_AOilRefinery_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedRefinery_MetaData), NewProp_SpawnedRefinery_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirSimGameMode_Statics::NewProp_SpawnedDrone = { "SpawnedDrone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirSimGameMode, SpawnedDrone), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedDrone_MetaData), NewProp_SpawnedDrone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAirSimGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirSimGameMode_Statics::NewProp_RefineryClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirSimGameMode_Statics::NewProp_SpawnedRefinery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirSimGameMode_Statics::NewProp_SpawnedDrone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAirSimGameMode_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AAirSimGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAirSimGameMode_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_AirSimGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAirSimGameMode, AAirSimGameMode::StaticClass, TEXT("AAirSimGameMode"), &Z_Registration_Info_UClass_AAirSimGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAirSimGameMode), 538512354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_AirSimGameMode_h_1582969565(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_AirSimGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_AirSimGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
