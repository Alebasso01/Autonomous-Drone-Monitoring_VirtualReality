// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraManager() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_ACameraManager();
AIRSIM_API UClass* Z_Construct_UClass_ACameraManager_NoRegister();
AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
AIRSIM_API UClass* Z_Construct_UClass_UManualPoseController_NoRegister();
AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_ECameraDirectorMode();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Enum ECameraDirectorMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraDirectorMode;
static UEnum* ECameraDirectorMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraDirectorMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraDirectorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AirSim_ECameraDirectorMode, (UObject*)Z_Construct_UPackage__Script_AirSim(), TEXT("ECameraDirectorMode"));
	}
	return Z_Registration_Info_UEnum_ECameraDirectorMode.OuterSingleton;
}
template<> AIRSIM_API UEnum* StaticEnum<ECameraDirectorMode>()
{
	return ECameraDirectorMode_StaticEnum();
}
struct Z_Construct_UEnum_AirSim_ECameraDirectorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CAMERA_DIRECTOR_MODE_BACKUP.DisplayName", "Backup" },
		{ "CAMERA_DIRECTOR_MODE_BACKUP.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_BACKUP" },
		{ "CAMERA_DIRECTOR_MODE_FLY_WITH_ME.DisplayName", "FlyWithMe" },
		{ "CAMERA_DIRECTOR_MODE_FLY_WITH_ME.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME" },
		{ "CAMERA_DIRECTOR_MODE_FPV.DisplayName", "FPV" },
		{ "CAMERA_DIRECTOR_MODE_FPV.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV" },
		{ "CAMERA_DIRECTOR_MODE_FRONT.DisplayName", "Front" },
		{ "CAMERA_DIRECTOR_MODE_FRONT.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FRONT" },
		{ "CAMERA_DIRECTOR_MODE_GROUND_OBSERVER.DisplayName", "GroundObserver" },
		{ "CAMERA_DIRECTOR_MODE_GROUND_OBSERVER.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER" },
		{ "CAMERA_DIRECTOR_MODE_MANUAL.DisplayName", "Manual" },
		{ "CAMERA_DIRECTOR_MODE_MANUAL.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL" },
		{ "CAMERA_DIRECTOR_MODE_NODISPLAY.DisplayName", "No Display" },
		{ "CAMERA_DIRECTOR_MODE_NODISPLAY.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_NODISPLAY" },
		{ "CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE.DisplayName", "SpringArmChase" },
		{ "CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE.Name", "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE" },
		{ "ModuleRelativePath", "CameraManager.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV },
		{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER },
		{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME },
		{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL },
		{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE },
		{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_BACKUP", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_BACKUP },
		{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_NODISPLAY", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_NODISPLAY },
		{ "ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FRONT", (int64)ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FRONT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AirSim_ECameraDirectorMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
	nullptr,
	"ECameraDirectorMode",
	"ECameraDirectorMode",
	Z_Construct_UEnum_AirSim_ECameraDirectorMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AirSim_ECameraDirectorMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AirSim_ECameraDirectorMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AirSim_ECameraDirectorMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AirSim_ECameraDirectorMode()
{
	if (!Z_Registration_Info_UEnum_ECameraDirectorMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraDirectorMode.InnerSingleton, Z_Construct_UEnum_AirSim_ECameraDirectorMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraDirectorMode.InnerSingleton;
}
// End Enum ECameraDirectorMode

// Begin Class ACameraManager Function getMode
struct Z_Construct_UFunction_ACameraManager_getMode_Statics
{
	struct CameraManager_eventgetMode_Parms
	{
		ECameraDirectorMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modes" },
		{ "ModuleRelativePath", "CameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACameraManager_getMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACameraManager_getMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraManager_eventgetMode_Parms, ReturnValue), Z_Construct_UEnum_AirSim_ECameraDirectorMode, METADATA_PARAMS(0, nullptr) }; // 1172410851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraManager_getMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraManager_getMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraManager_getMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraManager_getMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraManager_getMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraManager, nullptr, "getMode", nullptr, nullptr, Z_Construct_UFunction_ACameraManager_getMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraManager_getMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraManager_getMode_Statics::CameraManager_eventgetMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraManager_getMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraManager_getMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraManager_getMode_Statics::CameraManager_eventgetMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraManager_getMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraManager_getMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraManager::execgetMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECameraDirectorMode*)Z_Param__Result=P_THIS->getMode();
	P_NATIVE_END;
}
// End Class ACameraManager Function getMode

// Begin Class ACameraManager Function setMode
struct Z_Construct_UFunction_ACameraManager_setMode_Statics
{
	struct CameraManager_eventsetMode_Parms
	{
		ECameraDirectorMode mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Modes" },
		{ "ModuleRelativePath", "CameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACameraManager_setMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACameraManager_setMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraManager_eventsetMode_Parms, mode), Z_Construct_UEnum_AirSim_ECameraDirectorMode, METADATA_PARAMS(0, nullptr) }; // 1172410851
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraManager_setMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraManager_setMode_Statics::NewProp_mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraManager_setMode_Statics::NewProp_mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraManager_setMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraManager_setMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraManager, nullptr, "setMode", nullptr, nullptr, Z_Construct_UFunction_ACameraManager_setMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraManager_setMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACameraManager_setMode_Statics::CameraManager_eventsetMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraManager_setMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACameraManager_setMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACameraManager_setMode_Statics::CameraManager_eventsetMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACameraManager_setMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraManager_setMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACameraManager::execsetMode)
{
	P_GET_ENUM(ECameraDirectorMode,Z_Param_mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->setMode(ECameraDirectorMode(Z_Param_mode));
	P_NATIVE_END;
}
// End Class ACameraManager Function setMode

// Begin Class ACameraManager
void ACameraManager::StaticRegisterNativesACameraManager()
{
	UClass* Class = ACameraManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "getMode", &ACameraManager::execgetMode },
		{ "setMode", &ACameraManager::execsetMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraManager);
UClass* Z_Construct_UClass_ACameraManager_NoRegister()
{
	return ACameraManager::StaticClass();
}
struct Z_Construct_UClass_ACameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CameraManager.h" },
		{ "ModuleRelativePath", "CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring arm that will offset the camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring arm that will offset the camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "CameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_manual_pose_controller__MetaData[] = {
		{ "ModuleRelativePath", "CameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_manual_pose_controller_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraManager_getMode, "getMode" }, // 2957319590
		{ &Z_Construct_UFunction_ACameraManager_setMode, "setMode" }, // 2493009171
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraManager_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraManager, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraManager_Statics::NewProp_ExternalCamera = { "ExternalCamera", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraManager, ExternalCamera), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalCamera_MetaData), NewProp_ExternalCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraManager_Statics::NewProp_manual_pose_controller_ = { "manual_pose_controller_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACameraManager, manual_pose_controller_), Z_Construct_UClass_UManualPoseController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_manual_pose_controller__MetaData), NewProp_manual_pose_controller__MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManager_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManager_Statics::NewProp_ExternalCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraManager_Statics::NewProp_manual_pose_controller_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraManager_Statics::ClassParams = {
	&ACameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACameraManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACameraManager()
{
	if (!Z_Registration_Info_UClass_ACameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraManager.OuterSingleton, Z_Construct_UClass_ACameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACameraManager.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<ACameraManager>()
{
	return ACameraManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraManager);
ACameraManager::~ACameraManager() {}
// End Class ACameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_CameraManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraDirectorMode_StaticEnum, TEXT("ECameraDirectorMode"), &Z_Registration_Info_UEnum_ECameraDirectorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1172410851U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACameraManager, ACameraManager::StaticClass, TEXT("ACameraManager"), &Z_Registration_Info_UClass_ACameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraManager), 3859963576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_CameraManager_h_2628896873(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_CameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_CameraManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_CameraManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_CameraManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
