// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DroneHUD.generated.h"

/**
 * 
 */
UCLASS()
class IPLOM_API UDroneHUD : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditAnywhere)
		TArray<FString> Inclination;

	UPROPERTY(EditAnywhere)
		TArray<FString> Status;

public:

	UFUNCTION(BlueprintCallable)
		FString GetInclination(int32 ID);

	UFUNCTION(BlueprintCallable)
		FString GetStatus(int32 ID);

	void SetInclination(FString NewInclination, int32 ID);
	void SetStatus(FString NewStatus, int32 ID);

	void InitializeArrays();
	
};
