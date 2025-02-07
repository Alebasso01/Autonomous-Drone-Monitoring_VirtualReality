// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimMode/SimModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASimModeBase;
#ifdef AIRSIM_SimModeBase_generated_h
#error "SimModeBase.generated.h already included, missing '#pragma once' in SimModeBase.h"
#endif
#define AIRSIM_SimModeBase_generated_h

#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeBase_h_21_DELEGATE \
AIRSIM_API void FLevelLoaded_DelegateWrapper(const FMulticastScriptDelegate& LevelLoaded);


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execreset); \
	DECLARE_FUNCTION(exectoggleLoadingScreen); \
	DECLARE_FUNCTION(execgetSimMode); \
	DECLARE_FUNCTION(exectoggleRecording);


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimModeBase(); \
	friend struct Z_Construct_UClass_ASimModeBase_Statics; \
public: \
	DECLARE_CLASS(ASimModeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ASimModeBase)


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASimModeBase(ASimModeBase&&); \
	ASimModeBase(const ASimModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimModeBase) \
	NO_API virtual ~ASimModeBase();


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeBase_h_23_PROLOG
#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_INCLASS_NO_PURE_DECLS \
	FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeBase_h_27_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class ASimModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_SimModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
