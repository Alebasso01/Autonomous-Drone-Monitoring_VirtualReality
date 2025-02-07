// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicles/Car/CarPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarPawn() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_ACarPawn();
AIRSIM_API UClass* Z_Construct_UClass_ACarPawn_NoRegister();
AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class ACarPawn
void ACarPawn::StaticRegisterNativesACarPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACarPawn);
UClass* Z_Construct_UClass_ACarPawn_NoRegister()
{
	return ACarPawn::StaticClass();
}
struct Z_Construct_UClass_ACarPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicles/Car/CarPawn.h" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_center_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_left_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_right_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_driver_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_back_center_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_left__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_right__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_driver__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_back_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Car/CarPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_base_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_base_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_base_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_driver_base_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_base_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_driver_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center_base_ = { "camera_front_center_base_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, camera_front_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_center_base__MetaData), NewProp_camera_front_center_base__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left_base_ = { "camera_front_left_base_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, camera_front_left_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_left_base__MetaData), NewProp_camera_front_left_base__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right_base_ = { "camera_front_right_base_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, camera_front_right_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_right_base__MetaData), NewProp_camera_front_right_base__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver_base_ = { "camera_driver_base_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, camera_driver_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_driver_base__MetaData), NewProp_camera_driver_base__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center_base_ = { "camera_back_center_base_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, camera_back_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_back_center_base__MetaData), NewProp_camera_back_center_base__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center_ = { "camera_front_center_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, camera_front_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_center__MetaData), NewProp_camera_front_center__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left_ = { "camera_front_left_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, camera_front_left_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_left__MetaData), NewProp_camera_front_left__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right_ = { "camera_front_right_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, camera_front_right_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_right__MetaData), NewProp_camera_front_right__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver_ = { "camera_driver_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, camera_driver_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_driver__MetaData), NewProp_camera_driver__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center_ = { "camera_back_center_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACarPawn, camera_back_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_back_center__MetaData), NewProp_camera_back_center__MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACarPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center_base_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left_base_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right_base_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver_base_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center_base_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_center_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_left_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_front_right_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_driver_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarPawn_Statics::NewProp_camera_back_center_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACarPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACarPawn_Statics::ClassParams = {
	&ACarPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACarPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACarPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACarPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACarPawn()
{
	if (!Z_Registration_Info_UClass_ACarPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACarPawn.OuterSingleton, Z_Construct_UClass_ACarPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACarPawn.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<ACarPawn>()
{
	return ACarPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACarPawn);
ACarPawn::~ACarPawn() {}
// End Class ACarPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACarPawn, ACarPawn::StaticClass, TEXT("ACarPawn"), &Z_Registration_Info_UClass_ACarPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACarPawn), 2138342591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_1204912341(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Car_CarPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
