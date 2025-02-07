// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehicles/Multirotor/FlyingPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingPawn() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_AFlyingPawn();
AIRSIM_API UClass* Z_Construct_UClass_AFlyingPawn_NoRegister();
AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class AFlyingPawn
void AFlyingPawn::StaticRegisterNativesAFlyingPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlyingPawn);
UClass* Z_Construct_UClass_AFlyingPawn_NoRegister()
{
	return AFlyingPawn::StaticClass();
}
struct Z_Construct_UClass_AFlyingPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Vehicles/Multirotor/FlyingPawn.h" },
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatorFactor_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_left__MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//variables\n//Unreal components\n" },
#endif
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variables\nUnreal components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_right__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_front_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_back_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_bottom_center__MetaData[] = {
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotating_movements__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Vehicles/Multirotor/FlyingPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotatorFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_left_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_right_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_front_center_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_back_center_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_bottom_center_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_rotating_movements__Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_rotating_movements_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlyingPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_RotatorFactor = { "RotatorFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, RotatorFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatorFactor_MetaData), NewProp_RotatorFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_left_ = { "camera_front_left_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, camera_front_left_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_left__MetaData), NewProp_camera_front_left__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_right_ = { "camera_front_right_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, camera_front_right_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_right__MetaData), NewProp_camera_front_right__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_center_ = { "camera_front_center_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, camera_front_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_front_center__MetaData), NewProp_camera_front_center__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_back_center_ = { "camera_back_center_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, camera_back_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_back_center__MetaData), NewProp_camera_back_center__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_bottom_center_ = { "camera_bottom_center_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, camera_bottom_center_), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_bottom_center__MetaData), NewProp_camera_bottom_center__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_rotating_movements__Inner = { "rotating_movements_", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlyingPawn_Statics::NewProp_rotating_movements_ = { "rotating_movements_", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingPawn, rotating_movements_), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotating_movements__MetaData), NewProp_rotating_movements__MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlyingPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_RotatorFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_left_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_right_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_front_center_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_back_center_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_camera_bottom_center_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_rotating_movements__Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingPawn_Statics::NewProp_rotating_movements_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlyingPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlyingPawn_Statics::ClassParams = {
	&AFlyingPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFlyingPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlyingPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlyingPawn()
{
	if (!Z_Registration_Info_UClass_AFlyingPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlyingPawn.OuterSingleton, Z_Construct_UClass_AFlyingPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlyingPawn.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<AFlyingPawn>()
{
	return AFlyingPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlyingPawn);
AFlyingPawn::~AFlyingPawn() {}
// End Class AFlyingPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlyingPawn, AFlyingPawn::StaticClass, TEXT("AFlyingPawn"), &Z_Registration_Info_UClass_AFlyingPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlyingPawn), 2305832867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_381752358(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
