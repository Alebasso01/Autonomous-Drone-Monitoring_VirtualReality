// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimMode/SimModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimModeBase() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_ACameraManager_NoRegister();
AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase();
AIRSIM_API UClass* Z_Construct_UClass_ASimModeBase_NoRegister();
AIRSIM_API UClass* Z_Construct_UClass_ULoadingScreenWidget_NoRegister();
AIRSIM_API UFunction* Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Delegate FLevelLoaded
struct Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AirSim, nullptr, "LevelLoaded__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLevelLoaded_DelegateWrapper(const FMulticastScriptDelegate& LevelLoaded)
{
	LevelLoaded.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FLevelLoaded

// Begin Class ASimModeBase Function getSimMode
struct Z_Construct_UFunction_ASimModeBase_getSimMode_Statics
{
	struct SimModeBase_eventgetSimMode_Parms
	{
		ASimModeBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Airsim | get stuff" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimModeBase_eventgetSimMode_Parms, ReturnValue), Z_Construct_UClass_ASimModeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimModeBase, nullptr, "getSimMode", nullptr, nullptr, Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::SimModeBase_eventgetSimMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::SimModeBase_eventgetSimMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimModeBase_getSimMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimModeBase_getSimMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimModeBase::execgetSimMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASimModeBase**)Z_Param__Result=ASimModeBase::getSimMode();
	P_NATIVE_END;
}
// End Class ASimModeBase Function getSimMode

// Begin Class ASimModeBase Function reset
struct Z_Construct_UFunction_ASimModeBase_reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Airsim | get stuff" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimModeBase_reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimModeBase, nullptr, "reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimModeBase_reset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASimModeBase_reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimModeBase_reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimModeBase::execreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->reset();
	P_NATIVE_END;
}
// End Class ASimModeBase Function reset

// Begin Class ASimModeBase Function toggleLoadingScreen
struct Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics
{
	struct SimModeBase_eventtoggleLoadingScreen_Parms
	{
		bool is_visible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Airsim | get stuff" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_is_visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_is_visible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::NewProp_is_visible_SetBit(void* Obj)
{
	((SimModeBase_eventtoggleLoadingScreen_Parms*)Obj)->is_visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::NewProp_is_visible = { "is_visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimModeBase_eventtoggleLoadingScreen_Parms), &Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::NewProp_is_visible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::NewProp_is_visible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimModeBase, nullptr, "toggleLoadingScreen", nullptr, nullptr, Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::SimModeBase_eventtoggleLoadingScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::SimModeBase_eventtoggleLoadingScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimModeBase::exectoggleLoadingScreen)
{
	P_GET_UBOOL(Z_Param_is_visible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->toggleLoadingScreen(Z_Param_is_visible);
	P_NATIVE_END;
}
// End Class ASimModeBase Function toggleLoadingScreen

// Begin Class ASimModeBase Function toggleRecording
struct Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics
{
	struct SimModeBase_eventtoggleRecording_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Recording" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimModeBase_eventtoggleRecording_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimModeBase_eventtoggleRecording_Parms), &Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASimModeBase, nullptr, "toggleRecording", nullptr, nullptr, Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::SimModeBase_eventtoggleRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::SimModeBase_eventtoggleRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASimModeBase_toggleRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASimModeBase_toggleRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASimModeBase::exectoggleRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->toggleRecording();
	P_NATIVE_END;
}
// End Class ASimModeBase Function toggleRecording

// Begin Class ASimModeBase
void ASimModeBase::StaticRegisterNativesASimModeBase()
{
	UClass* Class = ASimModeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "getSimMode", &ASimModeBase::execgetSimMode },
		{ "reset", &ASimModeBase::execreset },
		{ "toggleLoadingScreen", &ASimModeBase::exectoggleLoadingScreen },
		{ "toggleRecording", &ASimModeBase::exectoggleRecording },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimModeBase);
UClass* Z_Construct_UClass_ASimModeBase_NoRegister()
{
	return ASimModeBase::StaticClass();
}
struct Z_Construct_UClass_ASimModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SimMode/SimModeBase.h" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelLoaded_MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraDirector_MetaData[] = {
		{ "Category", "Refs" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableReport_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pip_camera_class_MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_collision_display_template_MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_external_camera_class__MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//assets loaded in constructor\n" },
#endif
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "assets loaded in constructor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_camera_director_class__MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sky_sphere_class__MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_loading_screen_widget__MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sky_sphere__MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sun__MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_spawned_actors__MetaData[] = {
		{ "ModuleRelativePath", "SimMode/SimModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelLoaded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraDirector;
	static void NewProp_EnableReport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableReport;
	static const UECodeGen_Private::FClassPropertyParams NewProp_pip_camera_class;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_collision_display_template;
	static const UECodeGen_Private::FClassPropertyParams NewProp_external_camera_class_;
	static const UECodeGen_Private::FClassPropertyParams NewProp_camera_director_class_;
	static const UECodeGen_Private::FClassPropertyParams NewProp_sky_sphere_class_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_loading_screen_widget_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sky_sphere_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sun_;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_spawned_actors__Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_spawned_actors_;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASimModeBase_getSimMode, "getSimMode" }, // 1759308913
		{ &Z_Construct_UFunction_ASimModeBase_reset, "reset" }, // 1753954207
		{ &Z_Construct_UFunction_ASimModeBase_toggleLoadingScreen, "toggleLoadingScreen" }, // 445095107
		{ &Z_Construct_UFunction_ASimModeBase_toggleRecording, "toggleRecording" }, // 1520224369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_OnLevelLoaded = { "OnLevelLoaded", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimModeBase, OnLevelLoaded), Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLevelLoaded_MetaData), NewProp_OnLevelLoaded_MetaData) }; // 152087142
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_CameraDirector = { "CameraDirector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimModeBase, CameraDirector), Z_Construct_UClass_ACameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraDirector_MetaData), NewProp_CameraDirector_MetaData) };
void Z_Construct_UClass_ASimModeBase_Statics::NewProp_EnableReport_SetBit(void* Obj)
{
	((ASimModeBase*)Obj)->EnableReport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_EnableReport = { "EnableReport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASimModeBase), &Z_Construct_UClass_ASimModeBase_Statics::NewProp_EnableReport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableReport_MetaData), NewProp_EnableReport_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_pip_camera_class = { "pip_camera_class", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimModeBase, pip_camera_class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pip_camera_class_MetaData), NewProp_pip_camera_class_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_collision_display_template = { "collision_display_template", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimModeBase, collision_display_template), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_collision_display_template_MetaData), NewProp_collision_display_template_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_external_camera_class_ = { "external_camera_class_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimModeBase, external_camera_class_), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_external_camera_class__MetaData), NewProp_external_camera_class__MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_camera_director_class_ = { "camera_director_class_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimModeBase, camera_director_class_), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_camera_director_class__MetaData), NewProp_camera_director_class__MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere_class_ = { "sky_sphere_class_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimModeBase, sky_sphere_class_), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sky_sphere_class__MetaData), NewProp_sky_sphere_class__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_loading_screen_widget_ = { "loading_screen_widget_", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimModeBase, loading_screen_widget_), Z_Construct_UClass_ULoadingScreenWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_loading_screen_widget__MetaData), NewProp_loading_screen_widget__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere_ = { "sky_sphere_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimModeBase, sky_sphere_), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sky_sphere__MetaData), NewProp_sky_sphere__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_sun_ = { "sun_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimModeBase, sun_), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sun__MetaData), NewProp_sun__MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_spawned_actors__Inner = { "spawned_actors_", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASimModeBase_Statics::NewProp_spawned_actors_ = { "spawned_actors_", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimModeBase, spawned_actors_), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_spawned_actors__MetaData), NewProp_spawned_actors__MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_OnLevelLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_CameraDirector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_EnableReport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_pip_camera_class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_collision_display_template,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_external_camera_class_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_camera_director_class_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere_class_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_loading_screen_widget_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_sky_sphere_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_sun_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_spawned_actors__Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimModeBase_Statics::NewProp_spawned_actors_,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASimModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimModeBase_Statics::ClassParams = {
	&ASimModeBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASimModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASimModeBase()
{
	if (!Z_Registration_Info_UClass_ASimModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimModeBase.OuterSingleton, Z_Construct_UClass_ASimModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimModeBase.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<ASimModeBase>()
{
	return ASimModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASimModeBase);
ASimModeBase::~ASimModeBase() {}
// End Class ASimModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_SimMode_SimModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimModeBase, ASimModeBase::StaticClass, TEXT("ASimModeBase"), &Z_Registration_Info_UClass_ASimModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimModeBase), 2882507715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_SimMode_SimModeBase_h_1971393412(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_SimMode_SimModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_SimMode_SimModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
