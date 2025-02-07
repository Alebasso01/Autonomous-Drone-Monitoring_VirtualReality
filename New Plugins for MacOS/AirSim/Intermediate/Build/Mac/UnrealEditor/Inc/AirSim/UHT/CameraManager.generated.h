// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECameraDirectorMode : uint8;
#ifdef AIRSIM_CameraManager_generated_h
#error "CameraManager.generated.h already included, missing '#pragma once' in CameraManager.h"
#endif
#define AIRSIM_CameraManager_generated_h

#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_CameraManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execsetMode); \
	DECLARE_FUNCTION(execgetMode);


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_CameraManager_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraManager(); \
	friend struct Z_Construct_UClass_ACameraManager_Statics; \
public: \
	DECLARE_CLASS(ACameraManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACameraManager)


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_CameraManager_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACameraManager(ACameraManager&&); \
	ACameraManager(const ACameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraManager) \
	NO_API virtual ~ACameraManager();


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_CameraManager_h_25_PROLOG
#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_CameraManager_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_CameraManager_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_CameraManager_h_28_INCLASS_NO_PURE_DECLS \
	FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_CameraManager_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class ACameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_CameraManager_h


#define FOREACH_ENUM_ECAMERADIRECTORMODE(op) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_BACKUP) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_NODISPLAY) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FRONT) 

enum class ECameraDirectorMode : uint8;
template<> struct TIsUEnumClass<ECameraDirectorMode> { enum { Value = true }; };
template<> AIRSIM_API UEnum* StaticEnum<ECameraDirectorMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
