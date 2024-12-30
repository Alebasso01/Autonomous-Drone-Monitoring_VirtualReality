// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectFilter() {}

// Begin Cross Module References
AIRSIM_API UScriptStruct* Z_Construct_UScriptStruct_FObjectFilter();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin ScriptStruct FObjectFilter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectFilter;
class UScriptStruct* FObjectFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectFilter, (UObject*)Z_Construct_UPackage__Script_AirSim(), TEXT("ObjectFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectFilter.OuterSingleton;
}
template<> AIRSIM_API UScriptStruct* StaticStruct<FObjectFilter>()
{
	return FObjectFilter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_static_mesh__MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_skeletal_mesh__MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wildcard_mesh_names__MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actor_class__MetaData[] = {
		{ "Category", "Class" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_component_class__MetaData[] = {
		{ "Category", "Class" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Will match for components that have the provided class or Actors that have\n     * at least one component with the provided class.*/" },
#endif
		{ "ModuleRelativePath", "ObjectFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Will match for components that have the provided class or Actors that have\n    * at least one component with the provided class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actor_tag__MetaData[] = {
		{ "Category", "Tag" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This will Match Actors that have the provided Tag or components if their\n     * Owner has the provided Tag */" },
#endif
		{ "ModuleRelativePath", "ObjectFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will Match Actors that have the provided Tag or components if their\n    * Owner has the provided Tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_component_tag__MetaData[] = {
		{ "Category", "Tag" },
		{ "ModuleRelativePath", "ObjectFilter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actor_instance__MetaData[] = {
		{ "Category", "Instance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This will only match with if the tested actor is the same as the provided\n     * instance.*/" },
#endif
		{ "ModuleRelativePath", "ObjectFilter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will only match with if the tested actor is the same as the provided\n    * instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_static_mesh_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletal_mesh_;
	static const UECodeGen_Private::FStrPropertyParams NewProp_wildcard_mesh_names__Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_wildcard_mesh_names_;
	static const UECodeGen_Private::FClassPropertyParams NewProp_actor_class_;
	static const UECodeGen_Private::FClassPropertyParams NewProp_component_class_;
	static const UECodeGen_Private::FNamePropertyParams NewProp_actor_tag_;
	static const UECodeGen_Private::FNamePropertyParams NewProp_component_tag_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_actor_instance_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectFilter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_static_mesh_ = { "static_mesh_", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectFilter, static_mesh_), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_static_mesh__MetaData), NewProp_static_mesh__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_skeletal_mesh_ = { "skeletal_mesh_", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectFilter, skeletal_mesh_), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_skeletal_mesh__MetaData), NewProp_skeletal_mesh__MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_wildcard_mesh_names__Inner = { "wildcard_mesh_names_", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_wildcard_mesh_names_ = { "wildcard_mesh_names_", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectFilter, wildcard_mesh_names_), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wildcard_mesh_names__MetaData), NewProp_wildcard_mesh_names__MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_class_ = { "actor_class_", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectFilter, actor_class_), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actor_class__MetaData), NewProp_actor_class__MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_class_ = { "component_class_", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectFilter, component_class_), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_component_class__MetaData), NewProp_component_class__MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_tag_ = { "actor_tag_", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectFilter, actor_tag_), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actor_tag__MetaData), NewProp_actor_tag__MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_tag_ = { "component_tag_", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectFilter, component_tag_), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_component_tag__MetaData), NewProp_component_tag__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_instance_ = { "actor_instance_", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectFilter, actor_instance_), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actor_instance__MetaData), NewProp_actor_instance__MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_static_mesh_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_skeletal_mesh_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_wildcard_mesh_names__Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_wildcard_mesh_names_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_class_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_class_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_tag_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_component_tag_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectFilter_Statics::NewProp_actor_instance_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectFilter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
	nullptr,
	&NewStructOps,
	"ObjectFilter",
	Z_Construct_UScriptStruct_FObjectFilter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::PropPointers),
	sizeof(FObjectFilter),
	alignof(FObjectFilter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectFilter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectFilter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectFilter()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectFilter.InnerSingleton, Z_Construct_UScriptStruct_FObjectFilter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectFilter.InnerSingleton;
}
// End ScriptStruct FObjectFilter

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_ObjectFilter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FObjectFilter::StaticStruct, Z_Construct_UScriptStruct_FObjectFilter_Statics::NewStructOps, TEXT("ObjectFilter"), &Z_Registration_Info_UScriptStruct_ObjectFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectFilter), 1167107597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_ObjectFilter_h_482033655(TEXT("/Script/AirSim"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_ObjectFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_ObjectFilter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
