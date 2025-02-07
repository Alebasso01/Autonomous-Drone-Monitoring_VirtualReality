// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SimHUD/SimHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_SimHUD_generated_h
#error "SimHUD.generated.h already included, missing '#pragma once' in SimHUD.h"
#endif
#define AIRSIM_SimHUD_generated_h

#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimHUD_SimHUD_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimHUD(); \
	friend struct Z_Construct_UClass_ASimHUD_Statics; \
public: \
	DECLARE_CLASS(ASimHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ASimHUD)


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimHUD_SimHUD_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASimHUD(ASimHUD&&); \
	ASimHUD(const ASimHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimHUD) \
	NO_API virtual ~ASimHUD();


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimHUD_SimHUD_h_18_PROLOG
#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimHUD_SimHUD_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimHUD_SimHUD_h_21_INCLASS_NO_PURE_DECLS \
	FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimHUD_SimHUD_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class ASimHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimHUD_SimHUD_h


#define FOREACH_ENUM_ESIMULATORMODE(op) \
	op(ESimulatorMode::SIM_MODE_HIL) 

enum class ESimulatorMode : uint8;
template<> struct TIsUEnumClass<ESimulatorMode> { enum { Value = true }; };
template<> AIRSIM_API UEnum* StaticEnum<ESimulatorMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
