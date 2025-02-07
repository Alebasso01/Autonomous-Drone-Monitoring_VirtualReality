// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DetectionComponent.h"
#include "ObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetectionComponent() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_UDetectionComponent();
AIRSIM_API UClass* Z_Construct_UClass_UDetectionComponent_NoRegister();
AIRSIM_API UScriptStruct* Z_Construct_UScriptStruct_FDetectionInfo();
AIRSIM_API UScriptStruct* Z_Construct_UScriptStruct_FObjectFilter();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin ScriptStruct FDetectionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DetectionInfo;
class UScriptStruct* FDetectionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DetectionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DetectionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetectionInfo, (UObject*)Z_Construct_UPackage__Script_AirSim(), TEXT("DetectionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DetectionInfo.OuterSingleton;
}
template<> AIRSIM_API UScriptStruct* StaticStruct<FDetectionInfo>()
{
	return FDetectionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDetectionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box2D_MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box3D_MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box3D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetectionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDetectionInfo, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box2D = { "Box2D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDetectionInfo, Box2D), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box2D_MetaData), NewProp_Box2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box3D = { "Box3D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDetectionInfo, Box3D), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box3D_MetaData), NewProp_Box3D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDetectionInfo, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeTransform_MetaData), NewProp_RelativeTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetectionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_Box3D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewProp_RelativeTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetectionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	nullptr,
	&NewStructOps,
	"DetectionInfo",
	Z_Construct_UScriptStruct_FDetectionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectionInfo_Statics::PropPointers),
	sizeof(FDetectionInfo),
	alignof(FDetectionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDetectionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDetectionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DetectionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DetectionInfo.InnerSingleton, Z_Construct_UScriptStruct_FDetectionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DetectionInfo.InnerSingleton;
}
// End ScriptStruct FDetectionInfo

// Begin Class UDetectionComponent
void UDetectionComponent::StaticRegisterNativesUDetectionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDetectionComponent);
UClass* Z_Construct_UClass_UDetectionComponent_NoRegister()
{
	return UDetectionComponent::StaticClass();
}
struct Z_Construct_UClass_UDetectionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DetectionComponent.h" },
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_target__MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_object_filter__MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_max_distance_to_camera__MetaData[] = {
		{ "Category", "Tracked Actors" },
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_scene_capture_component_2D__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cached_detections__MetaData[] = {
		{ "ModuleRelativePath", "DetectionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture_target_;
	static const UECodeGen_Private::FStructPropertyParams NewProp_object_filter_;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_max_distance_to_camera_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_scene_capture_component_2D_;
	static const UECodeGen_Private::FStructPropertyParams NewProp_cached_detections__Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_cached_detections_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetectionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_texture_target_ = { "texture_target_", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDetectionComponent, texture_target_), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_target__MetaData), NewProp_texture_target__MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_object_filter_ = { "object_filter_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDetectionComponent, object_filter_), Z_Construct_UScriptStruct_FObjectFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_object_filter__MetaData), NewProp_object_filter__MetaData) }; // 1167107597
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_max_distance_to_camera_ = { "max_distance_to_camera_", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDetectionComponent, max_distance_to_camera_), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_max_distance_to_camera__MetaData), NewProp_max_distance_to_camera__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_scene_capture_component_2D_ = { "scene_capture_component_2D_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDetectionComponent, scene_capture_component_2D_), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_scene_capture_component_2D__MetaData), NewProp_scene_capture_component_2D__MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_cached_detections__Inner = { "cached_detections_", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDetectionInfo, METADATA_PARAMS(0, nullptr) }; // 3280221399
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDetectionComponent_Statics::NewProp_cached_detections_ = { "cached_detections_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDetectionComponent, cached_detections_), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cached_detections__MetaData), NewProp_cached_detections__MetaData) }; // 3280221399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetectionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_texture_target_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_object_filter_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_max_distance_to_camera_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_scene_capture_component_2D_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_cached_detections__Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetectionComponent_Statics::NewProp_cached_detections_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDetectionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetectionComponent_Statics::ClassParams = {
	&UDetectionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDetectionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDetectionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDetectionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDetectionComponent()
{
	if (!Z_Registration_Info_UClass_UDetectionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetectionComponent.OuterSingleton, Z_Construct_UClass_UDetectionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDetectionComponent.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<UDetectionComponent>()
{
	return UDetectionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDetectionComponent);
UDetectionComponent::~UDetectionComponent() {}
// End Class UDetectionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_DetectionComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDetectionInfo::StaticStruct, Z_Construct_UScriptStruct_FDetectionInfo_Statics::NewStructOps, TEXT("DetectionInfo"), &Z_Registration_Info_UScriptStruct_DetectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDetectionInfo), 3280221399U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDetectionComponent, UDetectionComponent::StaticClass, TEXT("UDetectionComponent"), &Z_Registration_Info_UClass_UDetectionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetectionComponent), 1962734933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_DetectionComponent_h_563614344(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_DetectionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_DetectionComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_DetectionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_DetectionComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
