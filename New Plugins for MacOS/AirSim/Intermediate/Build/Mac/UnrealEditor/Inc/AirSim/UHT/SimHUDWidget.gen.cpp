// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimHUD/SimHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimHUDWidget() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_USimHUDWidget();
AIRSIM_API UClass* Z_Construct_UClass_USimHUDWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class USimHUDWidget Function getHelpContainerVisibility
struct SimHUDWidget_eventgetHelpContainerVisibility_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SimHUDWidget_eventgetHelpContainerVisibility_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USimHUDWidget_getHelpContainerVisibility = FName(TEXT("getHelpContainerVisibility"));
bool USimHUDWidget::getHelpContainerVisibility()
{
	SimHUDWidget_eventgetHelpContainerVisibility_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getHelpContainerVisibility),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimHUDWidget_eventgetHelpContainerVisibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventgetHelpContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "getHelpContainerVisibility", nullptr, nullptr, Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::PropPointers), sizeof(SimHUDWidget_eventgetHelpContainerVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimHUDWidget_eventgetHelpContainerVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USimHUDWidget Function getHelpContainerVisibility

// Begin Class USimHUDWidget Function getRecordButtonVisibility
struct SimHUDWidget_eventgetRecordButtonVisibility_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SimHUDWidget_eventgetRecordButtonVisibility_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USimHUDWidget_getRecordButtonVisibility = FName(TEXT("getRecordButtonVisibility"));
bool USimHUDWidget::getRecordButtonVisibility()
{
	SimHUDWidget_eventgetRecordButtonVisibility_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getRecordButtonVisibility),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimHUDWidget_eventgetRecordButtonVisibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventgetRecordButtonVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "getRecordButtonVisibility", nullptr, nullptr, Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::PropPointers), sizeof(SimHUDWidget_eventgetRecordButtonVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimHUDWidget_eventgetRecordButtonVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USimHUDWidget Function getRecordButtonVisibility

// Begin Class USimHUDWidget Function getReportContainerVisibility
struct SimHUDWidget_eventgetReportContainerVisibility_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SimHUDWidget_eventgetReportContainerVisibility_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USimHUDWidget_getReportContainerVisibility = FName(TEXT("getReportContainerVisibility"));
bool USimHUDWidget::getReportContainerVisibility()
{
	SimHUDWidget_eventgetReportContainerVisibility_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getReportContainerVisibility),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimHUDWidget_eventgetReportContainerVisibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventgetReportContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "getReportContainerVisibility", nullptr, nullptr, Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::PropPointers), sizeof(SimHUDWidget_eventgetReportContainerVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimHUDWidget_eventgetReportContainerVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USimHUDWidget Function getReportContainerVisibility

// Begin Class USimHUDWidget Function getSubwindowVisibility
struct SimHUDWidget_eventgetSubwindowVisibility_Parms
{
	int32 window_index;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	SimHUDWidget_eventgetSubwindowVisibility_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_USimHUDWidget_getSubwindowVisibility = FName(TEXT("getSubwindowVisibility"));
int32 USimHUDWidget::getSubwindowVisibility(int32 window_index)
{
	SimHUDWidget_eventgetSubwindowVisibility_Parms Parms;
	Parms.window_index=window_index;
	ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_getSubwindowVisibility),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_window_index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::NewProp_window_index = { "window_index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimHUDWidget_eventgetSubwindowVisibility_Parms, window_index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimHUDWidget_eventgetSubwindowVisibility_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::NewProp_window_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "getSubwindowVisibility", nullptr, nullptr, Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::PropPointers), sizeof(SimHUDWidget_eventgetSubwindowVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimHUDWidget_eventgetSubwindowVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USimHUDWidget Function getSubwindowVisibility

// Begin Class USimHUDWidget Function initializeForPlay
struct SimHUDWidget_eventinitializeForPlay_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SimHUDWidget_eventinitializeForPlay_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USimHUDWidget_initializeForPlay = FName(TEXT("initializeForPlay"));
bool USimHUDWidget::initializeForPlay()
{
	SimHUDWidget_eventinitializeForPlay_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_initializeForPlay),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimHUDWidget_eventinitializeForPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventinitializeForPlay_Parms), &Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "initializeForPlay", nullptr, nullptr, Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::PropPointers), sizeof(SimHUDWidget_eventinitializeForPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimHUDWidget_eventinitializeForPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimHUDWidget_initializeForPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimHUDWidget_initializeForPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USimHUDWidget Function initializeForPlay

// Begin Class USimHUDWidget Function onToggleRecordingButtonClick
struct Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event handler" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "onToggleRecordingButtonClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimHUDWidget::execonToggleRecordingButtonClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->onToggleRecordingButtonClick();
	P_NATIVE_END;
}
// End Class USimHUDWidget Function onToggleRecordingButtonClick

// Begin Class USimHUDWidget Function setHelpContainerVisibility
struct SimHUDWidget_eventsetHelpContainerVisibility_Parms
{
	bool is_visible;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SimHUDWidget_eventsetHelpContainerVisibility_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USimHUDWidget_setHelpContainerVisibility = FName(TEXT("setHelpContainerVisibility"));
bool USimHUDWidget::setHelpContainerVisibility(bool is_visible)
{
	SimHUDWidget_eventsetHelpContainerVisibility_Parms Parms;
	Parms.is_visible=is_visible ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setHelpContainerVisibility),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_is_visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_is_visible;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_is_visible_SetBit(void* Obj)
{
	((SimHUDWidget_eventsetHelpContainerVisibility_Parms*)Obj)->is_visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_is_visible = { "is_visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetHelpContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_is_visible_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimHUDWidget_eventsetHelpContainerVisibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetHelpContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_is_visible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "setHelpContainerVisibility", nullptr, nullptr, Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::PropPointers), sizeof(SimHUDWidget_eventsetHelpContainerVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimHUDWidget_eventsetHelpContainerVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USimHUDWidget Function setHelpContainerVisibility

// Begin Class USimHUDWidget Function setRecordButtonVisibility
struct SimHUDWidget_eventsetRecordButtonVisibility_Parms
{
	bool is_visible;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SimHUDWidget_eventsetRecordButtonVisibility_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USimHUDWidget_setRecordButtonVisibility = FName(TEXT("setRecordButtonVisibility"));
bool USimHUDWidget::setRecordButtonVisibility(bool is_visible)
{
	SimHUDWidget_eventsetRecordButtonVisibility_Parms Parms;
	Parms.is_visible=is_visible ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setRecordButtonVisibility),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_is_visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_is_visible;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_is_visible_SetBit(void* Obj)
{
	((SimHUDWidget_eventsetRecordButtonVisibility_Parms*)Obj)->is_visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_is_visible = { "is_visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetRecordButtonVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_is_visible_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimHUDWidget_eventsetRecordButtonVisibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetRecordButtonVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_is_visible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "setRecordButtonVisibility", nullptr, nullptr, Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::PropPointers), sizeof(SimHUDWidget_eventsetRecordButtonVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimHUDWidget_eventsetRecordButtonVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USimHUDWidget Function setRecordButtonVisibility

// Begin Class USimHUDWidget Function setReportContainerVisibility
struct SimHUDWidget_eventsetReportContainerVisibility_Parms
{
	bool is_visible;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SimHUDWidget_eventsetReportContainerVisibility_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USimHUDWidget_setReportContainerVisibility = FName(TEXT("setReportContainerVisibility"));
bool USimHUDWidget::setReportContainerVisibility(bool is_visible)
{
	SimHUDWidget_eventsetReportContainerVisibility_Parms Parms;
	Parms.is_visible=is_visible ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setReportContainerVisibility),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_is_visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_is_visible;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_is_visible_SetBit(void* Obj)
{
	((SimHUDWidget_eventsetReportContainerVisibility_Parms*)Obj)->is_visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_is_visible = { "is_visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetReportContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_is_visible_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimHUDWidget_eventsetReportContainerVisibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetReportContainerVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_is_visible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "setReportContainerVisibility", nullptr, nullptr, Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::PropPointers), sizeof(SimHUDWidget_eventsetReportContainerVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimHUDWidget_eventsetReportContainerVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USimHUDWidget Function setReportContainerVisibility

// Begin Class USimHUDWidget Function setReportText
struct SimHUDWidget_eventsetReportText_Parms
{
	FString text;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SimHUDWidget_eventsetReportText_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USimHUDWidget_setReportText = FName(TEXT("setReportText"));
bool USimHUDWidget::setReportText(const FString& text)
{
	SimHUDWidget_eventsetReportText_Parms Parms;
	Parms.text=text;
	ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setReportText),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USimHUDWidget_setReportText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_text;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimHUDWidget_eventsetReportText_Parms, text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_text_MetaData), NewProp_text_MetaData) };
void Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimHUDWidget_eventsetReportText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetReportText_Parms), &Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "setReportText", nullptr, nullptr, Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::PropPointers), sizeof(SimHUDWidget_eventsetReportText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimHUDWidget_eventsetReportText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimHUDWidget_setReportText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimHUDWidget_setReportText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USimHUDWidget Function setReportText

// Begin Class USimHUDWidget Function setSubwindowVisibility
struct SimHUDWidget_eventsetSubwindowVisibility_Parms
{
	int32 window_index;
	bool is_visible;
	UTextureRenderTarget2D* render_target;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SimHUDWidget_eventsetSubwindowVisibility_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USimHUDWidget_setSubwindowVisibility = FName(TEXT("setSubwindowVisibility"));
bool USimHUDWidget::setSubwindowVisibility(int32 window_index, bool is_visible, UTextureRenderTarget2D* render_target)
{
	SimHUDWidget_eventsetSubwindowVisibility_Parms Parms;
	Parms.window_index=window_index;
	Parms.is_visible=is_visible ? true : false;
	Parms.render_target=render_target;
	ProcessEvent(FindFunctionChecked(NAME_USimHUDWidget_setSubwindowVisibility),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "C++ Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//below are implemented in Blueprint. The return value is forced to be\n//bool even when not needed because of Unreal quirk that if return value\n//is not there then below are treated as events instead of overridable functions\n" },
#endif
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "below are implemented in Blueprint. The return value is forced to be\nbool even when not needed because of Unreal quirk that if return value\nis not there then below are treated as events instead of overridable functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_window_index;
	static void NewProp_is_visible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_is_visible;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_render_target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_window_index = { "window_index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimHUDWidget_eventsetSubwindowVisibility_Parms, window_index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_is_visible_SetBit(void* Obj)
{
	((SimHUDWidget_eventsetSubwindowVisibility_Parms*)Obj)->is_visible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_is_visible = { "is_visible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetSubwindowVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_is_visible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_render_target = { "render_target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimHUDWidget_eventsetSubwindowVisibility_Parms, render_target), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimHUDWidget_eventsetSubwindowVisibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimHUDWidget_eventsetSubwindowVisibility_Parms), &Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_window_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_is_visible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_render_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimHUDWidget, nullptr, "setSubwindowVisibility", nullptr, nullptr, Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::PropPointers), sizeof(SimHUDWidget_eventsetSubwindowVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimHUDWidget_eventsetSubwindowVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USimHUDWidget Function setSubwindowVisibility

// Begin Class USimHUDWidget
void USimHUDWidget::StaticRegisterNativesUSimHUDWidget()
{
	UClass* Class = USimHUDWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "onToggleRecordingButtonClick", &USimHUDWidget::execonToggleRecordingButtonClick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimHUDWidget);
UClass* Z_Construct_UClass_USimHUDWidget_NoRegister()
{
	return USimHUDWidget::StaticClass();
}
struct Z_Construct_UClass_USimHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SimHUD/SimHUDWidget.h" },
		{ "ModuleRelativePath", "SimHUD/SimHUDWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimHUDWidget_getHelpContainerVisibility, "getHelpContainerVisibility" }, // 2487752745
		{ &Z_Construct_UFunction_USimHUDWidget_getRecordButtonVisibility, "getRecordButtonVisibility" }, // 28205813
		{ &Z_Construct_UFunction_USimHUDWidget_getReportContainerVisibility, "getReportContainerVisibility" }, // 1780954488
		{ &Z_Construct_UFunction_USimHUDWidget_getSubwindowVisibility, "getSubwindowVisibility" }, // 889254689
		{ &Z_Construct_UFunction_USimHUDWidget_initializeForPlay, "initializeForPlay" }, // 2200886914
		{ &Z_Construct_UFunction_USimHUDWidget_onToggleRecordingButtonClick, "onToggleRecordingButtonClick" }, // 3120463493
		{ &Z_Construct_UFunction_USimHUDWidget_setHelpContainerVisibility, "setHelpContainerVisibility" }, // 3180563110
		{ &Z_Construct_UFunction_USimHUDWidget_setRecordButtonVisibility, "setRecordButtonVisibility" }, // 1463382546
		{ &Z_Construct_UFunction_USimHUDWidget_setReportContainerVisibility, "setReportContainerVisibility" }, // 1872615286
		{ &Z_Construct_UFunction_USimHUDWidget_setReportText, "setReportText" }, // 1003403259
		{ &Z_Construct_UFunction_USimHUDWidget_setSubwindowVisibility, "setSubwindowVisibility" }, // 4268102679
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimHUDWidget_Statics::ClassParams = {
	&USimHUDWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USimHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimHUDWidget()
{
	if (!Z_Registration_Info_UClass_USimHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimHUDWidget.OuterSingleton, Z_Construct_UClass_USimHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimHUDWidget.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<USimHUDWidget>()
{
	return USimHUDWidget::StaticClass();
}
USimHUDWidget::USimHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimHUDWidget);
USimHUDWidget::~USimHUDWidget() {}
// End Class USimHUDWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimHUDWidget, USimHUDWidget::StaticClass, TEXT("USimHUDWidget"), &Z_Registration_Info_UClass_USimHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimHUDWidget), 1924819532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_1706613604(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimHUD_SimHUDWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
