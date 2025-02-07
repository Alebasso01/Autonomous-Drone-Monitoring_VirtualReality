// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AirBlueprintLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirBlueprintLib() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_UAirBlueprintLib();
AIRSIM_API UClass* Z_Construct_UClass_UAirBlueprintLib_NoRegister();
AIRSIM_API UEnum* Z_Construct_UEnum_AirSim_LogDebugLevel();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Enum LogDebugLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_LogDebugLevel;
static UEnum* LogDebugLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_LogDebugLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_LogDebugLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AirSim_LogDebugLevel, (UObject*)Z_Construct_UPackage__Script_AirSim(), TEXT("LogDebugLevel"));
	}
	return Z_Registration_Info_UEnum_LogDebugLevel.OuterSingleton;
}
template<> AIRSIM_API UEnum* StaticEnum<LogDebugLevel>()
{
	return LogDebugLevel_StaticEnum();
}
struct Z_Construct_UEnum_AirSim_LogDebugLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failure.DisplayName", "Failure" },
		{ "Failure.Name", "LogDebugLevel::Failure" },
		{ "Informational.DisplayName", "Informational" },
		{ "Informational.Name", "LogDebugLevel::Informational" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
		{ "Success.DisplayName", "Success" },
		{ "Success.Name", "LogDebugLevel::Success" },
		{ "Unimportant.DisplayName", "Unimportant" },
		{ "Unimportant.Name", "LogDebugLevel::Unimportant" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LogDebugLevel::Informational", (int64)LogDebugLevel::Informational },
		{ "LogDebugLevel::Success", (int64)LogDebugLevel::Success },
		{ "LogDebugLevel::Failure", (int64)LogDebugLevel::Failure },
		{ "LogDebugLevel::Unimportant", (int64)LogDebugLevel::Unimportant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AirSim_LogDebugLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AirSim,
	nullptr,
	"LogDebugLevel",
	"LogDebugLevel",
	Z_Construct_UEnum_AirSim_LogDebugLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AirSim_LogDebugLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AirSim_LogDebugLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AirSim_LogDebugLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AirSim_LogDebugLevel()
{
	if (!Z_Registration_Info_UEnum_LogDebugLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_LogDebugLevel.InnerSingleton, Z_Construct_UEnum_AirSim_LogDebugLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_LogDebugLevel.InnerSingleton;
}
// End Enum LogDebugLevel

// Begin Class UAirBlueprintLib Function ListWorldsInRegistry
struct Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics
{
	struct AirBlueprintLib_eventListWorldsInRegistry_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AirSim|LevelAPI" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirBlueprintLib_eventListWorldsInRegistry_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAirBlueprintLib, nullptr, "ListWorldsInRegistry", nullptr, nullptr, Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::AirBlueprintLib_eventListWorldsInRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::AirBlueprintLib_eventListWorldsInRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirBlueprintLib::execListWorldsInRegistry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UAirBlueprintLib::ListWorldsInRegistry();
	P_NATIVE_END;
}
// End Class UAirBlueprintLib Function ListWorldsInRegistry

// Begin Class UAirBlueprintLib Function loadLevel
struct Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics
{
	struct AirBlueprintLib_eventloadLevel_Parms
	{
		UObject* context;
		FString level_name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AirSim|LevelAPI" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_level_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_level_name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirBlueprintLib_eventloadLevel_Parms, context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_level_name = { "level_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirBlueprintLib_eventloadLevel_Parms, level_name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_level_name_MetaData), NewProp_level_name_MetaData) };
void Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AirBlueprintLib_eventloadLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AirBlueprintLib_eventloadLevel_Parms), &Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_level_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAirBlueprintLib, nullptr, "loadLevel", nullptr, nullptr, Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::AirBlueprintLib_eventloadLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::AirBlueprintLib_eventloadLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirBlueprintLib_loadLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirBlueprintLib_loadLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirBlueprintLib::execloadLevel)
{
	P_GET_OBJECT(UObject,Z_Param_context);
	P_GET_PROPERTY(FStrProperty,Z_Param_level_name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAirBlueprintLib::loadLevel(Z_Param_context,Z_Param_level_name);
	P_NATIVE_END;
}
// End Class UAirBlueprintLib Function loadLevel

// Begin Class UAirBlueprintLib Function LogMessage
struct Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics
{
	struct AirBlueprintLib_eventLogMessage_Parms
	{
		FString prefix;
		FString suffix;
		LogDebugLevel level;
		float persist_sec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utils" },
		{ "CPP_Default_persist_sec", "60.000000" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_prefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_suffix;
	static const UECodeGen_Private::FBytePropertyParams NewProp_level_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_persist_sec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_prefix = { "prefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, prefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_prefix_MetaData), NewProp_prefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_suffix = { "suffix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, suffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_suffix_MetaData), NewProp_suffix_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, level), Z_Construct_UEnum_AirSim_LogDebugLevel, METADATA_PARAMS(0, nullptr) }; // 305580661
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_persist_sec = { "persist_sec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirBlueprintLib_eventLogMessage_Parms, persist_sec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_suffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_level_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::NewProp_persist_sec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAirBlueprintLib, nullptr, "LogMessage", nullptr, nullptr, Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::AirBlueprintLib_eventLogMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::AirBlueprintLib_eventLogMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirBlueprintLib_LogMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirBlueprintLib_LogMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirBlueprintLib::execLogMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_prefix);
	P_GET_PROPERTY(FStrProperty,Z_Param_suffix);
	P_GET_ENUM(LogDebugLevel,Z_Param_level);
	P_GET_PROPERTY(FFloatProperty,Z_Param_persist_sec);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAirBlueprintLib::LogMessage(Z_Param_prefix,Z_Param_suffix,LogDebugLevel(Z_Param_level),Z_Param_persist_sec);
	P_NATIVE_END;
}
// End Class UAirBlueprintLib Function LogMessage

// Begin Class UAirBlueprintLib Function RunConsoleCommand
struct Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics
{
	struct AirBlueprintLib_eventRunConsoleCommand_Parms
	{
		const AActor* context;
		FString command;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AirSim" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_context_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_command;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirBlueprintLib_eventRunConsoleCommand_Parms, context), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_context_MetaData), NewProp_context_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_command = { "command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirBlueprintLib_eventRunConsoleCommand_Parms, command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_command_MetaData), NewProp_command_MetaData) };
void Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AirBlueprintLib_eventRunConsoleCommand_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AirBlueprintLib_eventRunConsoleCommand_Parms), &Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAirBlueprintLib, nullptr, "RunConsoleCommand", nullptr, nullptr, Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::AirBlueprintLib_eventRunConsoleCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::AirBlueprintLib_eventRunConsoleCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirBlueprintLib::execRunConsoleCommand)
{
	P_GET_OBJECT(AActor,Z_Param_context);
	P_GET_PROPERTY(FStrProperty,Z_Param_command);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAirBlueprintLib::RunConsoleCommand(Z_Param_context,Z_Param_command);
	P_NATIVE_END;
}
// End Class UAirBlueprintLib Function RunConsoleCommand

// Begin Class UAirBlueprintLib Function spawnPlayer
struct Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics
{
	struct AirBlueprintLib_eventspawnPlayer_Parms
	{
		UWorld* context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AirSim|LevelAPI" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AirBlueprintLib_eventspawnPlayer_Parms, context), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AirBlueprintLib_eventspawnPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AirBlueprintLib_eventspawnPlayer_Parms), &Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAirBlueprintLib, nullptr, "spawnPlayer", nullptr, nullptr, Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::AirBlueprintLib_eventspawnPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::AirBlueprintLib_eventspawnPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAirBlueprintLib::execspawnPlayer)
{
	P_GET_OBJECT(UWorld,Z_Param_context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAirBlueprintLib::spawnPlayer(Z_Param_context);
	P_NATIVE_END;
}
// End Class UAirBlueprintLib Function spawnPlayer

// Begin Class UAirBlueprintLib
void UAirBlueprintLib::StaticRegisterNativesUAirBlueprintLib()
{
	UClass* Class = UAirBlueprintLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ListWorldsInRegistry", &UAirBlueprintLib::execListWorldsInRegistry },
		{ "loadLevel", &UAirBlueprintLib::execloadLevel },
		{ "LogMessage", &UAirBlueprintLib::execLogMessage },
		{ "RunConsoleCommand", &UAirBlueprintLib::execRunConsoleCommand },
		{ "spawnPlayer", &UAirBlueprintLib::execspawnPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAirBlueprintLib);
UClass* Z_Construct_UClass_UAirBlueprintLib_NoRegister()
{
	return UAirBlueprintLib::StaticClass();
}
struct Z_Construct_UClass_UAirBlueprintLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "IncludePath", "AirBlueprintLib.h" },
		{ "ModuleRelativePath", "AirBlueprintLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAirBlueprintLib_ListWorldsInRegistry, "ListWorldsInRegistry" }, // 4156029359
		{ &Z_Construct_UFunction_UAirBlueprintLib_loadLevel, "loadLevel" }, // 2590770195
		{ &Z_Construct_UFunction_UAirBlueprintLib_LogMessage, "LogMessage" }, // 764755132
		{ &Z_Construct_UFunction_UAirBlueprintLib_RunConsoleCommand, "RunConsoleCommand" }, // 3609620945
		{ &Z_Construct_UFunction_UAirBlueprintLib_spawnPlayer, "spawnPlayer" }, // 587553817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAirBlueprintLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAirBlueprintLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAirBlueprintLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAirBlueprintLib_Statics::ClassParams = {
	&UAirBlueprintLib::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAirBlueprintLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UAirBlueprintLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAirBlueprintLib()
{
	if (!Z_Registration_Info_UClass_UAirBlueprintLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAirBlueprintLib.OuterSingleton, Z_Construct_UClass_UAirBlueprintLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAirBlueprintLib.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<UAirBlueprintLib>()
{
	return UAirBlueprintLib::StaticClass();
}
UAirBlueprintLib::UAirBlueprintLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAirBlueprintLib);
UAirBlueprintLib::~UAirBlueprintLib() {}
// End Class UAirBlueprintLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_AirBlueprintLib_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ LogDebugLevel_StaticEnum, TEXT("LogDebugLevel"), &Z_Registration_Info_UEnum_LogDebugLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 305580661U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAirBlueprintLib, UAirBlueprintLib::StaticClass, TEXT("UAirBlueprintLib"), &Z_Registration_Info_UClass_UAirBlueprintLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAirBlueprintLib), 2459476678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_AirBlueprintLib_h_3399918606(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_AirBlueprintLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_AirBlueprintLib_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_AirBlueprintLib_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_AirBlueprintLib_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
