// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weather/WeatherLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AExponentialHeightFog;
class UUserWidget;
class UWorld;
enum class EWeatherParamScalar : uint8;
#ifdef AIRSIM_WeatherLib_generated_h
#error "WeatherLib.generated.h already included, missing '#pragma once' in WeatherLib.h"
#endif
#define AIRSIM_WeatherLib_generated_h

#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Weather_WeatherLib_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execsetWeatherFog); \
	DECLARE_FUNCTION(execactorGetWorld); \
	DECLARE_FUNCTION(execwidgetGetWorld); \
	DECLARE_FUNCTION(exectoggleWeatherMenu); \
	DECLARE_FUNCTION(execisMenuVisible); \
	DECLARE_FUNCTION(exechideWeatherMenu); \
	DECLARE_FUNCTION(execshowWeatherMenu); \
	DECLARE_FUNCTION(execsetWeatherEnabled); \
	DECLARE_FUNCTION(execgetIsWeatherEnabled); \
	DECLARE_FUNCTION(execsetWeatherWindDirection); \
	DECLARE_FUNCTION(execgetWeatherWindDirection); \
	DECLARE_FUNCTION(execgetWeatherParamScalar); \
	DECLARE_FUNCTION(execsetWeatherParamScalar); \
	DECLARE_FUNCTION(execinitWeather);


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Weather_WeatherLib_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeatherLib(); \
	friend struct Z_Construct_UClass_UWeatherLib_Statics; \
public: \
	DECLARE_CLASS(UWeatherLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UWeatherLib)


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Weather_WeatherLib_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeatherLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeatherLib(UWeatherLib&&); \
	UWeatherLib(const UWeatherLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeatherLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeatherLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeatherLib) \
	NO_API virtual ~UWeatherLib();


#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Weather_WeatherLib_h_38_PROLOG
#define FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Weather_WeatherLib_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Weather_WeatherLib_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Weather_WeatherLib_h_41_INCLASS_NO_PURE_DECLS \
	FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Weather_WeatherLib_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class UWeatherLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_Weather_WeatherLib_h


#define FOREACH_ENUM_EWEATHERPARAMSCALAR(op) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_RAIN) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADWETNESS) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_SNOW) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADSNOW) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_MAPLELEAF) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADLEAF) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_DUST) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_FOG) \
	op(EWeatherParamScalar::WEATHER_PARAM_SCALAR_WEATHERENABLED) 

enum class EWeatherParamScalar : uint8;
template<> struct TIsUEnumClass<EWeatherParamScalar> { enum { Value = true }; };
template<> AIRSIM_API UEnum* StaticEnum<EWeatherParamScalar>();

#define FOREACH_ENUM_EWEATHERPARAMVECTOR(op) \
	op(EWeatherParamVector::WEATHER_PARAM_VECTOR_WIND) 

enum class EWeatherParamVector : uint8;
template<> struct TIsUEnumClass<EWeatherParamVector> { enum { Value = true }; };
template<> AIRSIM_API UEnum* StaticEnum<EWeatherParamVector>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
