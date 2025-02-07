// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicles/ComputerVision/ComputerVisionPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputerVisionPawn() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_AComputerVisionPawn();
AIRSIM_API UClass* Z_Construct_UClass_AComputerVisionPawn_NoRegister();
AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
AIRSIM_API UClass* Z_Construct_UClass_UManualPoseController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class AComputerVisionPawn
void AComputerVisionPawn::StaticRegisterNativesAComputerVisionPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AComputerVisionPawn);
UClass* Z_Construct_UClass_AComputerVisionPawn_NoRegister()
{
	return AComputerVisionPawn::StaticClass();
}
struct Z_Construct_UClass_AComputerVisionPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pip_camera_class__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_center_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_left_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_right_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_bottom_center_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_back_center_base__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_left__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_right__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_bottom_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_back_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_manual_pose_controller__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/ComputerVision/ComputerVisionPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_pip_camera_class_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_base_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_base_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_base_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_bottom_center_base_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_base_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_bottom_center_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_manual_pose_controller_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComputerVisionPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_pip_camera_class_ = { "pip_camera_class_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, pip_camera_class_), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pip_camera_class__MetaData), NewProp_pip_camera_class__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center_base_ = { "camera_front_center_base_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_center_base__MetaData), NewProp_camera_front_center_base__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left_base_ = { "camera_front_left_base_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_left_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_left_base__MetaData), NewProp_camera_front_left_base__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right_base_ = { "camera_front_right_base_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_right_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_right_base__MetaData), NewProp_camera_front_right_base__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center_base_ = { "camera_bottom_center_base_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_bottom_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_bottom_center_base__MetaData), NewProp_camera_bottom_center_base__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center_base_ = { "camera_back_center_base_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_back_center_base_), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_back_center_base__MetaData), NewProp_camera_back_center_base__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center_ = { "camera_front_center_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_center__MetaData), NewProp_camera_front_center__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left_ = { "camera_front_left_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_left_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_left__MetaData), NewProp_camera_front_left__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right_ = { "camera_front_right_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_front_right_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_right__MetaData), NewProp_camera_front_right__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center_ = { "camera_bottom_center_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_bottom_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_bottom_center__MetaData), NewProp_camera_bottom_center__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center_ = { "camera_back_center_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, camera_back_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_back_center__MetaData), NewProp_camera_back_center__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_manual_pose_controller_ = { "manual_pose_controller_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AComputerVisionPawn, manual_pose_controller_), Z_Construct_UClass_UManualPoseController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_manual_pose_controller__MetaData), NewProp_manual_pose_controller__MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AComputerVisionPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_pip_camera_class_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center_base_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left_base_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right_base_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center_base_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center_base_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_center_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_left_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_front_right_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_bottom_center_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_camera_back_center_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComputerVisionPawn_Statics::NewProp_manual_pose_controller_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AComputerVisionPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AComputerVisionPawn_Statics::ClassParams = {
	&AComputerVisionPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AComputerVisionPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AComputerVisionPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AComputerVisionPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AComputerVisionPawn()
{
	if (!Z_Registration_Info_UClass_AComputerVisionPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AComputerVisionPawn.OuterSingleton, Z_Construct_UClass_AComputerVisionPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AComputerVisionPawn.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<AComputerVisionPawn>()
{
	return AComputerVisionPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AComputerVisionPawn);
AComputerVisionPawn::~AComputerVisionPawn() {}
// End Class AComputerVisionPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AComputerVisionPawn, AComputerVisionPawn::StaticClass, TEXT("AComputerVisionPawn"), &Z_Registration_Info_UClass_AComputerVisionPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AComputerVisionPawn), 3028402682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_4253080621(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_ComputerVision_ComputerVisionPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
