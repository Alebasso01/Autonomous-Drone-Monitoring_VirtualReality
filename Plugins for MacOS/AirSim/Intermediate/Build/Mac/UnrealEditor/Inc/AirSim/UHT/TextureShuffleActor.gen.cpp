// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TextureShuffleActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureShuffleActor() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_ATextureShuffleActor();
AIRSIM_API UClass* Z_Construct_UClass_ATextureShuffleActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class ATextureShuffleActor Function SwapTexture
struct TextureShuffleActor_eventSwapTexture_Parms
{
	int32 tex_id;
	int32 component_id;
	int32 material_id;
};
static FName NAME_ATextureShuffleActor_SwapTexture = FName(TEXT("SwapTexture"));
void ATextureShuffleActor::SwapTexture(int32 tex_id, int32 component_id, int32 material_id)
{
	TextureShuffleActor_eventSwapTexture_Parms Parms;
	Parms.tex_id=tex_id;
	Parms.component_id=component_id;
	Parms.material_id=material_id;
	ProcessEvent(FindFunctionChecked(NAME_ATextureShuffleActor_SwapTexture),&Parms);
}
struct Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TextureShuffleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_tex_id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_component_id;
	static const UECodeGen_Private::FIntPropertyParams NewProp_material_id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_tex_id = { "tex_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShuffleActor_eventSwapTexture_Parms, tex_id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_component_id = { "component_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShuffleActor_eventSwapTexture_Parms, component_id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_material_id = { "material_id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextureShuffleActor_eventSwapTexture_Parms, material_id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_tex_id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_component_id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::NewProp_material_id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATextureShuffleActor, nullptr, "SwapTexture", nullptr, nullptr, Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::PropPointers), sizeof(TextureShuffleActor_eventSwapTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(TextureShuffleActor_eventSwapTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATextureShuffleActor_SwapTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATextureShuffleActor_SwapTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATextureShuffleActor::execSwapTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_tex_id);
	P_GET_PROPERTY(FIntProperty,Z_Param_component_id);
	P_GET_PROPERTY(FIntProperty,Z_Param_material_id);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwapTexture_Implementation(Z_Param_tex_id,Z_Param_component_id,Z_Param_material_id);
	P_NATIVE_END;
}
// End Class ATextureShuffleActor Function SwapTexture

// Begin Class ATextureShuffleActor
void ATextureShuffleActor::StaticRegisterNativesATextureShuffleActor()
{
	UClass* Class = ATextureShuffleActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SwapTexture", &ATextureShuffleActor::execSwapTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATextureShuffleActor);
UClass* Z_Construct_UClass_ATextureShuffleActor_NoRegister()
{
	return ATextureShuffleActor::StaticClass();
}
struct Z_Construct_UClass_ATextureShuffleActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "TextureShuffleActor.h" },
		{ "ModuleRelativePath", "TextureShuffleActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[] = {
		{ "Category", "TextureShuffle" },
		{ "ModuleRelativePath", "TextureShuffleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwappableTextures_MetaData[] = {
		{ "Category", "TextureShuffle" },
		{ "ModuleRelativePath", "TextureShuffleActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialInstances_MetaData[] = {
		{ "ModuleRelativePath", "TextureShuffleActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwappableTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SwappableTextures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicMaterialInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATextureShuffleActor_SwapTexture, "SwapTexture" }, // 577193781
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATextureShuffleActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATextureShuffleActor, DynamicMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial_MetaData), NewProp_DynamicMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_SwappableTextures_Inner = { "SwappableTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_SwappableTextures = { "SwappableTextures", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATextureShuffleActor, SwappableTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwappableTextures_MetaData), NewProp_SwappableTextures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterialInstances_Inner = { "DynamicMaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterialInstances = { "DynamicMaterialInstances", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATextureShuffleActor, DynamicMaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterialInstances_MetaData), NewProp_DynamicMaterialInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATextureShuffleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_SwappableTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_SwappableTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterialInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextureShuffleActor_Statics::NewProp_DynamicMaterialInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATextureShuffleActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATextureShuffleActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATextureShuffleActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATextureShuffleActor_Statics::ClassParams = {
	&ATextureShuffleActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATextureShuffleActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATextureShuffleActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATextureShuffleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATextureShuffleActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATextureShuffleActor()
{
	if (!Z_Registration_Info_UClass_ATextureShuffleActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATextureShuffleActor.OuterSingleton, Z_Construct_UClass_ATextureShuffleActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATextureShuffleActor.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<ATextureShuffleActor>()
{
	return ATextureShuffleActor::StaticClass();
}
ATextureShuffleActor::ATextureShuffleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATextureShuffleActor);
ATextureShuffleActor::~ATextureShuffleActor() {}
// End Class ATextureShuffleActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATextureShuffleActor, ATextureShuffleActor::StaticClass, TEXT("ATextureShuffleActor"), &Z_Registration_Info_UClass_ATextureShuffleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATextureShuffleActor), 357532455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_767824428(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
