// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimMode/LoadingScreenWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenWidget() {}

// Begin Cross Module References
AIRSIM_API UClass* Z_Construct_UClass_ULoadingScreenWidget();
AIRSIM_API UClass* Z_Construct_UClass_ULoadingScreenWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_AirSim();
// End Cross Module References

// Begin Class ULoadingScreenWidget
void ULoadingScreenWidget::StaticRegisterNativesULoadingScreenWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadingScreenWidget);
UClass* Z_Construct_UClass_ULoadingScreenWidget_NoRegister()
{
	return ULoadingScreenWidget::StaticClass();
}
struct Z_Construct_UClass_ULoadingScreenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SimMode/LoadingScreenWidget.h" },
		{ "ModuleRelativePath", "SimMode/LoadingScreenWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULoadingScreenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenWidget_Statics::ClassParams = {
	&ULoadingScreenWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadingScreenWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadingScreenWidget()
{
	if (!Z_Registration_Info_UClass_ULoadingScreenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadingScreenWidget.OuterSingleton, Z_Construct_UClass_ULoadingScreenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadingScreenWidget.OuterSingleton;
}
template<> AIRSIM_API UClass* StaticClass<ULoadingScreenWidget>()
{
	return ULoadingScreenWidget::StaticClass();
}
ULoadingScreenWidget::ULoadingScreenWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenWidget);
ULoadingScreenWidget::~ULoadingScreenWidget() {}
// End Class ULoadingScreenWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_LoadingScreenWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadingScreenWidget, ULoadingScreenWidget::StaticClass, TEXT("ULoadingScreenWidget"), &Z_Registration_Info_UClass_ULoadingScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadingScreenWidget), 3065634240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_LoadingScreenWidget_h_2284497202(TEXT("/Script/AirSim"),
	Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_LoadingScreenWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_alfo3du_UnrealEngine_Unreal_Projects_iplom_Plugins_AirSim_Source_SimMode_LoadingScreenWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
