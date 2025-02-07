// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirSim_init() {}
	AIRSIM_API UFunction* Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AirSim;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AirSim()
	{
		if (!Z_Registration_Info_UPackage__Script_AirSim.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AirSim_LevelLoaded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AirSim",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDAC5DBE6,
				0xBF71AB5B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AirSim.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AirSim.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AirSim(Z_Construct_UPackage__Script_AirSim, TEXT("/Script/AirSim"), Z_Registration_Info_UPackage__Script_AirSim, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDAC5DBE6, 0xBF71AB5B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
