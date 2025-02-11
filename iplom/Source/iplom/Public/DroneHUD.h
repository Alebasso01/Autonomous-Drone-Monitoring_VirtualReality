#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h" // For TextBlock reference
#include "DroneHUD.generated.h"

UCLASS()
class IPLOM_API UDroneHUD : public UUserWidget
{
    GENERATED_BODY()

protected:
    UPROPERTY(EditAnywhere)
    TArray<FString> Inclination;

    UPROPERTY(EditAnywhere)
    TArray<FString> Status;

    UPROPERTY(EditAnywhere)
    TArray<FSlateColor> Colors;


public:
    UFUNCTION(BlueprintCallable)
    FString GetInclination(int32 ID);

    UFUNCTION(BlueprintCallable)
    FString GetStatus(int32 ID);

    UFUNCTION(BlueprintCallable)
    FSlateColor GetColor(int32 ID);

    void SetInclination(FString NewInclination, int32 ID);
    void SetStatus(FString NewStatus, int32 ID);

    void SetStatusColor(FVector RGB, float A, int32 ID);
    void SetStatusColor(FVector RGB, int32 ID);

    void InitializeArrays();
};
