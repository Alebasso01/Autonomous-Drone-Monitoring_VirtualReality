// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PIPCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePIPCamera() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_APIPCamera();
AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
AIRSIM_API UClass* Z_Construct_UClass_UDetectionComponent_NoRegister();
CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class APIPCamera
void APIPCamera::StaticRegisterNativesAPIPCamera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APIPCamera);
UClass* Z_Construct_UClass_APIPCamera_NoRegister()
{
	return APIPCamera::StaticClass();
}
struct Z_Construct_UClass_APIPCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "PIPCamera.h" },
		{ "ModuleRelativePath", "PIPCamera.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distortion_param_collection__MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//members\n" },
#endif
		{ "ModuleRelativePath", "PIPCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "members" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distortion_param_instance__MetaData[] = {
		{ "ModuleRelativePath", "PIPCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_captures__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PIPCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_render_targets__MetaData[] = {
		{ "ModuleRelativePath", "PIPCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_detections__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PIPCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera__MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//CinemAirSim\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PIPCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CinemAirSim" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_noise_materials__MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//TMap<int, UMaterialInstanceDynamic*> noise_materials_;\n//below is needed because TMap doesn't work with UPROPERTY, but we do have -ve index\n" },
#endif
		{ "ModuleRelativePath", "PIPCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TMap<int, UMaterialInstanceDynamic*> noise_materials_;\nbelow is needed because TMap doesn't work with UPROPERTY, but we do have -ve index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distortion_materials__MetaData[] = {
		{ "ModuleRelativePath", "PIPCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_noise_material_static__MetaData[] = {
		{ "ModuleRelativePath", "PIPCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_distortion_material_static__MetaData[] = {
		{ "ModuleRelativePath", "PIPCamera.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_distortion_param_collection_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_distortion_param_instance_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_captures__Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_captures_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_render_targets__Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_render_targets_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_detections__Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_detections_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_noise_materials__Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_noise_materials_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_distortion_materials__Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_distortion_materials_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_noise_material_static_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_distortion_material_static_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APIPCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_distortion_param_collection_ = { "distortion_param_collection_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APIPCamera, distortion_param_collection_), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distortion_param_collection__MetaData), NewProp_distortion_param_collection__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_distortion_param_instance_ = { "distortion_param_instance_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APIPCamera, distortion_param_instance_), Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distortion_param_instance__MetaData), NewProp_distortion_param_instance__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_captures__Inner = { "captures_", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_captures_ = { "captures_", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APIPCamera, captures_), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_captures__MetaData), NewProp_captures__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_render_targets__Inner = { "render_targets_", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_render_targets_ = { "render_targets_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APIPCamera, render_targets_), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_render_targets__MetaData), NewProp_render_targets__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_detections__Inner = { "detections_", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDetectionComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_detections_ = { "detections_", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APIPCamera, detections_), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_detections__MetaData), NewProp_detections__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_camera_ = { "camera_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APIPCamera, camera_), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera__MetaData), NewProp_camera__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_materials__Inner = { "noise_materials_", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_materials_ = { "noise_materials_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APIPCamera, noise_materials_), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_noise_materials__MetaData), NewProp_noise_materials__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_distortion_materials__Inner = { "distortion_materials_", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_distortion_materials_ = { "distortion_materials_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APIPCamera, distortion_materials_), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distortion_materials__MetaData), NewProp_distortion_materials__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_material_static_ = { "noise_material_static_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APIPCamera, noise_material_static_), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_noise_material_static__MetaData), NewProp_noise_material_static__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APIPCamera_Statics::NewProp_distortion_material_static_ = { "distortion_material_static_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APIPCamera, distortion_material_static_), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_distortion_material_static__MetaData), NewProp_distortion_material_static__MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APIPCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_distortion_param_collection_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_distortion_param_instance_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_captures__Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_captures_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_render_targets__Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_render_targets_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_detections__Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_detections_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_camera_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_materials__Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_materials_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_distortion_materials__Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_distortion_materials_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_noise_material_static_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APIPCamera_Statics::NewProp_distortion_material_static_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APIPCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APIPCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APIPCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APIPCamera_Statics::ClassParams = {
	&APIPCamera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APIPCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APIPCamera_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APIPCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_APIPCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APIPCamera()
{
	if (!Z_Registration_Info_UClass_APIPCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APIPCamera.OuterSingleton, Z_Construct_UClass_APIPCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APIPCamera.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<APIPCamera>()
{
	return APIPCamera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APIPCamera);
APIPCamera::~APIPCamera() {}
// End Class APIPCamera

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_PIPCamera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APIPCamera, APIPCamera::StaticClass, TEXT("APIPCamera"), &Z_Registration_Info_UClass_APIPCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APIPCamera), 1742647472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_PIPCamera_h_1364505879(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_PIPCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_PIPCamera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
