// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureShuffleActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_TextureShuffleActor_generated_h
#error "TextureShuffleActor.generated.h already included, missing '#pragma once' in TextureShuffleActor.h"
#endif
#define AIRSIM_TextureShuffleActor_generated_h

#define FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SwapTexture_Implementation(int32 tex_id, int32 component_id, int32 material_id); \
	DECLARE_FUNCTION(execSwapTexture);


#define FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_13_CALLBACK_WRAPPERS
#define FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATextureShuffleActor(); \
	friend struct Z_Construct_UClass_ATextureShuffleActor_Statics; \
public: \
	DECLARE_CLASS(ATextureShuffleActor, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ATextureShuffleActor)


#define FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATextureShuffleActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATextureShuffleActor(ATextureShuffleActor&&); \
	ATextureShuffleActor(const ATextureShuffleActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATextureShuffleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATextureShuffleActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATextureShuffleActor) \
	NO_API virtual ~ATextureShuffleActor();


#define FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_10_PROLOG
#define FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_13_CALLBACK_WRAPPERS \
	FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class ATextureShuffleActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_TextureShuffleActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
