// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weather/WeatherLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeatherLib() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_UWeatherLib();
AIRSIM_API UClass* Z_Construct_UClass_UWeatherLib_NoRegister();
AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_EWeatherParamScalar();
AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_EWeatherParamVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AExponentialHeightFog_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Enum EWeatherParamScalar
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeatherParamScalar;
static UEnum* EWeatherParamScalar_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeatherParamScalar.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeatherParamScalar.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AirSim_EWeatherParamScalar, (UObject*)Z_Construct_UPackage__Script_AirSim(), TEXT("EWeatherParamScalar"));
	}
	return Z_Registration_Info_UEnum_EWeatherParamScalar.OuterSingleton;
}
template<> AIRSIM_API UEnum* StaticEnum<EWeatherParamScalar>()
{
	return EWeatherParamScalar_StaticEnum();
}
struct Z_Construct_UEnum_AirSim_EWeatherParamScalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// NOTE: when adding new enums, you must add it to GetWeatherParamScalarName()'s switch statement\n// with a name for the corresponding material collection param name\n// can't use enum's display names because on package those get deleted.\n" },
#endif
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NOTE: when adding new enums, you must add it to GetWeatherParamScalarName()'s switch statement\nwith a name for the corresponding material collection param name\ncan't use enum's display names because on package those get deleted." },
#endif
		{ "WEATHER_PARAM_SCALAR_DUST.DisplayName", "Dust" },
		{ "WEATHER_PARAM_SCALAR_DUST.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_DUST" },
		{ "WEATHER_PARAM_SCALAR_FOG.DisplayName", "Fog" },
		{ "WEATHER_PARAM_SCALAR_FOG.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_FOG" },
		{ "WEATHER_PARAM_SCALAR_MAPLELEAF.DisplayName", "MapleLeaf" },
		{ "WEATHER_PARAM_SCALAR_MAPLELEAF.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_MAPLELEAF" },
		{ "WEATHER_PARAM_SCALAR_RAIN.DisplayName", "Rain" },
		{ "WEATHER_PARAM_SCALAR_RAIN.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_RAIN" },
		{ "WEATHER_PARAM_SCALAR_ROADLEAF.DisplayName", "RoadLeaf" },
		{ "WEATHER_PARAM_SCALAR_ROADLEAF.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADLEAF" },
		{ "WEATHER_PARAM_SCALAR_ROADSNOW.DisplayName", "RoadSnow" },
		{ "WEATHER_PARAM_SCALAR_ROADSNOW.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADSNOW" },
		{ "WEATHER_PARAM_SCALAR_ROADWETNESS.DisplayName", "RoadWetness" },
		{ "WEATHER_PARAM_SCALAR_ROADWETNESS.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADWETNESS" },
		{ "WEATHER_PARAM_SCALAR_SNOW.DisplayName", "Snow" },
		{ "WEATHER_PARAM_SCALAR_SNOW.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_SNOW" },
		{ "WEATHER_PARAM_SCALAR_WEATHERENABLED.DisplayName", "WeatherEnabled" },
		{ "WEATHER_PARAM_SCALAR_WEATHERENABLED.Name", "EWeatherParamScalar::WEATHER_PARAM_SCALAR_WEATHERENABLED" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_RAIN", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_RAIN },
		{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADWETNESS", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADWETNESS },
		{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_SNOW", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_SNOW },
		{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADSNOW", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADSNOW },
		{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_MAPLELEAF", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_MAPLELEAF },
		{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADLEAF", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_ROADLEAF },
		{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_DUST", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_DUST },
		{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_FOG", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_FOG },
		{ "EWeatherParamScalar::WEATHER_PARAM_SCALAR_WEATHERENABLED", (int64)EWeatherParamScalar::WEATHER_PARAM_SCALAR_WEATHERENABLED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AirSim_EWeatherParamScalar_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
	nullptr,
	"EWeatherParamScalar",
	"EWeatherParamScalar",
	Z_Construct_UEnum_AirSim_EWeatherParamScalar_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AirSim_EWeatherParamScalar_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AirSim_EWeatherParamScalar_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AirSim_EWeatherParamScalar_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AirSim_EWeatherParamScalar()
{
	if (!Z_Registration_Info_UEnum_EWeatherParamScalar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeatherParamScalar.InnerSingleton, Z_Construct_UEnum_AirSim_EWeatherParamScalar_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeatherParamScalar.InnerSingleton;
}
// End Enum EWeatherParamScalar

// Begin Enum EWeatherParamVector
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeatherParamVector;
static UEnum* EWeatherParamVector_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeatherParamVector.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeatherParamVector.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AirSim_EWeatherParamVector, (UObject*)Z_Construct_UPackage__Script_AirSim(), TEXT("EWeatherParamVector"));
	}
	return Z_Registration_Info_UEnum_EWeatherParamVector.OuterSingleton;
}
template<> AIRSIM_API UEnum* StaticEnum<EWeatherParamVector>()
{
	return EWeatherParamVector_StaticEnum();
}
struct Z_Construct_UEnum_AirSim_EWeatherParamVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
		{ "WEATHER_PARAM_VECTOR_MAX.DisplayName", "MAX" },
		{ "WEATHER_PARAM_VECTOR_MAX.Name", "EWeatherParamVector::WEATHER_PARAM_VECTOR_MAX" },
		{ "WEATHER_PARAM_VECTOR_WIND.DisplayName", "Wind" },
		{ "WEATHER_PARAM_VECTOR_WIND.Name", "EWeatherParamVector::WEATHER_PARAM_VECTOR_WIND" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeatherParamVector::WEATHER_PARAM_VECTOR_WIND", (int64)EWeatherParamVector::WEATHER_PARAM_VECTOR_WIND },
		{ "EWeatherParamVector::WEATHER_PARAM_VECTOR_MAX", (int64)EWeatherParamVector::WEATHER_PARAM_VECTOR_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AirSim_EWeatherParamVector_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
	nullptr,
	"EWeatherParamVector",
	"EWeatherParamVector",
	Z_Construct_UEnum_AirSim_EWeatherParamVector_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AirSim_EWeatherParamVector_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AirSim_EWeatherParamVector_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AirSim_EWeatherParamVector_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AirSim_EWeatherParamVector()
{
	if (!Z_Registration_Info_UEnum_EWeatherParamVector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeatherParamVector.InnerSingleton, Z_Construct_UEnum_AirSim_EWeatherParamVector_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeatherParamVector.InnerSingleton;
}
// End Enum EWeatherParamVector

// Begin Class UWeatherLib Function actorGetWorld
struct Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics
{
	struct WeatherLib_eventactorGetWorld_Parms
	{
		AActor* Actor;
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// blueprint callable function for actor to get world\n// since GetWorld() isn't exposed to bp\n" },
#endif
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "blueprint callable function for actor to get world\nsince GetWorld() isn't exposed to bp" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventactorGetWorld_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventactorGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "actorGetWorld", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::WeatherLib_eventactorGetWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::WeatherLib_eventactorGetWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_actorGetWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_actorGetWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execactorGetWorld)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=UWeatherLib::actorGetWorld(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UWeatherLib Function actorGetWorld

// Begin Class UWeatherLib Function getIsWeatherEnabled
struct Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics
{
	struct WeatherLib_eventgetIsWeatherEnabled_Parms
	{
		UWorld* World;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventgetIsWeatherEnabled_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeatherLib_eventgetIsWeatherEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeatherLib_eventgetIsWeatherEnabled_Parms), &Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "getIsWeatherEnabled", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::WeatherLib_eventgetIsWeatherEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::WeatherLib_eventgetIsWeatherEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execgetIsWeatherEnabled)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWeatherLib::getIsWeatherEnabled(Z_Param_World);
	P_NATIVE_END;
}
// End Class UWeatherLib Function getIsWeatherEnabled

// Begin Class UWeatherLib Function getWeatherParamScalar
struct Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics
{
	struct WeatherLib_eventgetWeatherParamScalar_Parms
	{
		UWorld* World;
		EWeatherParamScalar Param;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Param_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventgetWeatherParamScalar_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_Param_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventgetWeatherParamScalar_Parms, Param), Z_Construct_UEnum_AirSim_EWeatherParamScalar, METADATA_PARAMS(0, nullptr) }; // 2712842490
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventgetWeatherParamScalar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_Param_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "getWeatherParamScalar", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::WeatherLib_eventgetWeatherParamScalar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::WeatherLib_eventgetWeatherParamScalar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execgetWeatherParamScalar)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_ENUM(EWeatherParamScalar,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UWeatherLib::getWeatherParamScalar(Z_Param_World,EWeatherParamScalar(Z_Param_Param));
	P_NATIVE_END;
}
// End Class UWeatherLib Function getWeatherParamScalar

// Begin Class UWeatherLib Function getWeatherWindDirection
struct Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics
{
	struct WeatherLib_eventgetWeatherWindDirection_Parms
	{
		UWorld* World;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// only vector for now\n" },
#endif
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "only vector for now" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventgetWeatherWindDirection_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventgetWeatherWindDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "getWeatherWindDirection", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::WeatherLib_eventgetWeatherWindDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::WeatherLib_eventgetWeatherWindDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execgetWeatherWindDirection)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UWeatherLib::getWeatherWindDirection(Z_Param_World);
	P_NATIVE_END;
}
// End Class UWeatherLib Function getWeatherWindDirection

// Begin Class UWeatherLib Function hideWeatherMenu
struct Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics
{
	struct WeatherLib_eventhideWeatherMenu_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventhideWeatherMenu_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "hideWeatherMenu", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::WeatherLib_eventhideWeatherMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::WeatherLib_eventhideWeatherMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_hideWeatherMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_hideWeatherMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::exechideWeatherMenu)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWeatherLib::hideWeatherMenu(Z_Param_World);
	P_NATIVE_END;
}
// End Class UWeatherLib Function hideWeatherMenu

// Begin Class UWeatherLib Function initWeather
struct Z_Construct_UFunction_UWeatherLib_initWeather_Statics
{
	struct WeatherLib_eventinitWeather_Parms
	{
		UWorld* World;
		TArray<AActor*> ActorsToAttachTo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ActorsToAttachTo is an array of actors that we will attach weather particles to\n// in most cases, this will be the playable pawns so they will always have weather fx\n" },
#endif
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ActorsToAttachTo is an array of actors that we will attach weather particles to\nin most cases, this will be the playable pawns so they will always have weather fx" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToAttachTo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToAttachTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventinitWeather_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_ActorsToAttachTo_Inner = { "ActorsToAttachTo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_ActorsToAttachTo = { "ActorsToAttachTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventinitWeather_Parms, ActorsToAttachTo), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_initWeather_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_ActorsToAttachTo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_initWeather_Statics::NewProp_ActorsToAttachTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_initWeather_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_initWeather_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "initWeather", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_initWeather_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_initWeather_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_initWeather_Statics::WeatherLib_eventinitWeather_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_initWeather_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_initWeather_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_initWeather_Statics::WeatherLib_eventinitWeather_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_initWeather()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_initWeather_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execinitWeather)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_TARRAY(AActor*,Z_Param_ActorsToAttachTo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWeatherLib::initWeather(Z_Param_World,Z_Param_ActorsToAttachTo);
	P_NATIVE_END;
}
// End Class UWeatherLib Function initWeather

// Begin Class UWeatherLib Function isMenuVisible
struct Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics
{
	struct WeatherLib_eventisMenuVisible_Parms
	{
		UWorld* World;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventisMenuVisible_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeatherLib_eventisMenuVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeatherLib_eventisMenuVisible_Parms), &Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "isMenuVisible", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::WeatherLib_eventisMenuVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::WeatherLib_eventisMenuVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_isMenuVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_isMenuVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execisMenuVisible)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWeatherLib::isMenuVisible(Z_Param_World);
	P_NATIVE_END;
}
// End Class UWeatherLib Function isMenuVisible

// Begin Class UWeatherLib Function setWeatherEnabled
struct Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics
{
	struct WeatherLib_eventsetWeatherEnabled_Parms
	{
		UWorld* World;
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherEnabled_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((WeatherLib_eventsetWeatherEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeatherLib_eventsetWeatherEnabled_Parms), &Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "setWeatherEnabled", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::WeatherLib_eventsetWeatherEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::WeatherLib_eventsetWeatherEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_setWeatherEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execsetWeatherEnabled)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWeatherLib::setWeatherEnabled(Z_Param_World,Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UWeatherLib Function setWeatherEnabled

// Begin Class UWeatherLib Function setWeatherFog
struct Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics
{
	struct WeatherLib_eventsetWeatherFog_Parms
	{
		AExponentialHeightFog* fog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_fog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::NewProp_fog = { "fog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherFog_Parms, fog), Z_Construct_UClass_AExponentialHeightFog_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::NewProp_fog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "setWeatherFog", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::WeatherLib_eventsetWeatherFog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::WeatherLib_eventsetWeatherFog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherFog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_setWeatherFog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execsetWeatherFog)
{
	P_GET_OBJECT(AExponentialHeightFog,Z_Param_fog);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWeatherLib::setWeatherFog(Z_Param_fog);
	P_NATIVE_END;
}
// End Class UWeatherLib Function setWeatherFog

// Begin Class UWeatherLib Function setWeatherParamScalar
struct Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics
{
	struct WeatherLib_eventsetWeatherParamScalar_Parms
	{
		UWorld* World;
		EWeatherParamScalar Param;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* only sets or gets one param. need any actor in the world for WorldContextObject, so we can get world*/" },
#endif
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "only sets or gets one param. need any actor in the world for WorldContextObject, so we can get world" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Param_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Param;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherParamScalar_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Param_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherParamScalar_Parms, Param), Z_Construct_UEnum_AirSim_EWeatherParamScalar, METADATA_PARAMS(0, nullptr) }; // 2712842490
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherParamScalar_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Param_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Param,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "setWeatherParamScalar", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::WeatherLib_eventsetWeatherParamScalar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::WeatherLib_eventsetWeatherParamScalar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execsetWeatherParamScalar)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_ENUM(EWeatherParamScalar,Z_Param_Param);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWeatherLib::setWeatherParamScalar(Z_Param_World,EWeatherParamScalar(Z_Param_Param),Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UWeatherLib Function setWeatherParamScalar

// Begin Class UWeatherLib Function setWeatherWindDirection
struct Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics
{
	struct WeatherLib_eventsetWeatherWindDirection_Parms
	{
		UWorld* World;
		FVector NewWind;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// in a range of (-1, -1, -1) to (1, 1, 1)\n" },
#endif
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "in a range of (-1, -1, -1) to (1, 1, 1)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewWind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherWindDirection_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::NewProp_NewWind = { "NewWind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventsetWeatherWindDirection_Parms, NewWind), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::NewProp_NewWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "setWeatherWindDirection", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::WeatherLib_eventsetWeatherWindDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::WeatherLib_eventsetWeatherWindDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execsetWeatherWindDirection)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_STRUCT(FVector,Z_Param_NewWind);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWeatherLib::setWeatherWindDirection(Z_Param_World,Z_Param_NewWind);
	P_NATIVE_END;
}
// End Class UWeatherLib Function setWeatherWindDirection

// Begin Class UWeatherLib Function showWeatherMenu
struct Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics
{
	struct WeatherLib_eventshowWeatherMenu_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventshowWeatherMenu_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "showWeatherMenu", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::WeatherLib_eventshowWeatherMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::WeatherLib_eventshowWeatherMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_showWeatherMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_showWeatherMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execshowWeatherMenu)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWeatherLib::showWeatherMenu(Z_Param_World);
	P_NATIVE_END;
}
// End Class UWeatherLib Function showWeatherMenu

// Begin Class UWeatherLib Function toggleWeatherMenu
struct Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics
{
	struct WeatherLib_eventtoggleWeatherMenu_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weather" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventtoggleWeatherMenu_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "toggleWeatherMenu", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::WeatherLib_eventtoggleWeatherMenu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::WeatherLib_eventtoggleWeatherMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::exectoggleWeatherMenu)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWeatherLib::toggleWeatherMenu(Z_Param_World);
	P_NATIVE_END;
}
// End Class UWeatherLib Function toggleWeatherMenu

// Begin Class UWeatherLib Function widgetGetWorld
struct Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics
{
	struct WeatherLib_eventwidgetGetWorld_Parms
	{
		UUserWidget* Widget;
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// blueprint callable function for widget to get world\n// since GetWorld() isn't exposed to bp\n// widget isnt a subclass of actor, so it needs its own implementation\n" },
#endif
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "blueprint callable function for widget to get world\nsince GetWorld() isn't exposed to bp\nwidget isnt a subclass of actor, so it needs its own implementation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventwidgetGetWorld_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeatherLib_eventwidgetGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherLib, nullptr, "widgetGetWorld", nullptr, nullptr, Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::WeatherLib_eventwidgetGetWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::WeatherLib_eventwidgetGetWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeatherLib_widgetGetWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherLib_widgetGetWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeatherLib::execwidgetGetWorld)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=UWeatherLib::widgetGetWorld(Z_Param_Widget);
	P_NATIVE_END;
}
// End Class UWeatherLib Function widgetGetWorld

// Begin Class UWeatherLib
void UWeatherLib::StaticRegisterNativesUWeatherLib()
{
	UClass* Class = UWeatherLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "actorGetWorld", &UWeatherLib::execactorGetWorld },
		{ "getIsWeatherEnabled", &UWeatherLib::execgetIsWeatherEnabled },
		{ "getWeatherParamScalar", &UWeatherLib::execgetWeatherParamScalar },
		{ "getWeatherWindDirection", &UWeatherLib::execgetWeatherWindDirection },
		{ "hideWeatherMenu", &UWeatherLib::exechideWeatherMenu },
		{ "initWeather", &UWeatherLib::execinitWeather },
		{ "isMenuVisible", &UWeatherLib::execisMenuVisible },
		{ "setWeatherEnabled", &UWeatherLib::execsetWeatherEnabled },
		{ "setWeatherFog", &UWeatherLib::execsetWeatherFog },
		{ "setWeatherParamScalar", &UWeatherLib::execsetWeatherParamScalar },
		{ "setWeatherWindDirection", &UWeatherLib::execsetWeatherWindDirection },
		{ "showWeatherMenu", &UWeatherLib::execshowWeatherMenu },
		{ "toggleWeatherMenu", &UWeatherLib::exectoggleWeatherMenu },
		{ "widgetGetWorld", &UWeatherLib::execwidgetGetWorld },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeatherLib);
UClass* Z_Construct_UClass_UWeatherLib_NoRegister()
{
	return UWeatherLib::StaticClass();
}
struct Z_Construct_UClass_UWeatherLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weather/WeatherLib.h" },
		{ "ModuleRelativePath", "Weather/WeatherLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeatherLib_actorGetWorld, "actorGetWorld" }, // 2676170436
		{ &Z_Construct_UFunction_UWeatherLib_getIsWeatherEnabled, "getIsWeatherEnabled" }, // 4171897965
		{ &Z_Construct_UFunction_UWeatherLib_getWeatherParamScalar, "getWeatherParamScalar" }, // 2135525344
		{ &Z_Construct_UFunction_UWeatherLib_getWeatherWindDirection, "getWeatherWindDirection" }, // 3615516981
		{ &Z_Construct_UFunction_UWeatherLib_hideWeatherMenu, "hideWeatherMenu" }, // 2582024216
		{ &Z_Construct_UFunction_UWeatherLib_initWeather, "initWeather" }, // 3544143287
		{ &Z_Construct_UFunction_UWeatherLib_isMenuVisible, "isMenuVisible" }, // 556775022
		{ &Z_Construct_UFunction_UWeatherLib_setWeatherEnabled, "setWeatherEnabled" }, // 4286472563
		{ &Z_Construct_UFunction_UWeatherLib_setWeatherFog, "setWeatherFog" }, // 85615385
		{ &Z_Construct_UFunction_UWeatherLib_setWeatherParamScalar, "setWeatherParamScalar" }, // 3283693671
		{ &Z_Construct_UFunction_UWeatherLib_setWeatherWindDirection, "setWeatherWindDirection" }, // 3065711411
		{ &Z_Construct_UFunction_UWeatherLib_showWeatherMenu, "showWeatherMenu" }, // 3941217593
		{ &Z_Construct_UFunction_UWeatherLib_toggleWeatherMenu, "toggleWeatherMenu" }, // 670560280
		{ &Z_Construct_UFunction_UWeatherLib_widgetGetWorld, "widgetGetWorld" }, // 4223456552
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeatherLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeatherLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeatherLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeatherLib_Statics::ClassParams = {
	&UWeatherLib::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeatherLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeatherLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeatherLib()
{
	if (!Z_Registration_Info_UClass_UWeatherLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeatherLib.OuterSingleton, Z_Construct_UClass_UWeatherLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeatherLib.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<UWeatherLib>()
{
	return UWeatherLib::StaticClass();
}
UWeatherLib::UWeatherLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeatherLib);
UWeatherLib::~UWeatherLib() {}
// End Class UWeatherLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Weather_WeatherLib_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeatherParamScalar_StaticEnum, TEXT("EWeatherParamScalar"), &Z_Registration_Info_UEnum_EWeatherParamScalar, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2712842490U) },
		{ EWeatherParamVector_StaticEnum, TEXT("EWeatherParamVector"), &Z_Registration_Info_UEnum_EWeatherParamVector, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3454719038U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeatherLib, UWeatherLib::StaticClass, TEXT("UWeatherLib"), &Z_Registration_Info_UClass_UWeatherLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeatherLib), 3274566096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Weather_WeatherLib_h_1537788890(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Weather_WeatherLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Weather_WeatherLib_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Weather_WeatherLib_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_Test_Colosseum_Unreal_Environments_BlocksV2_Plugins_AirSim_Source_Weather_WeatherLib_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
