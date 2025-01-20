// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "Fluid.generated.h"

class AMyGameMode;

UCLASS()
class IPLOM_API AFluid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFluid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    // Niagara system reference
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fluid")
    UNiagaraSystem* NiagaraSystem;

    // Niagara component to apply the fluid's behavior
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fluid")
    UNiagaraComponent* NiagaraComponent;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    float MovementRange;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    AMyGameMode* GameMode;


    void MoveUp(float DeltaTime);
    void MoveDown(float DeltaTime);

    FVector OriginPosition;
    FVector EndPositionUp;
    FVector EndPositionDown;

    float MovementSpeed;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    bool bMovingUp;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    bool bStopMoving;

    void SetStopMoving(bool NewMovingState);

    void CheckForFountainSpawn();

    void SetGameMode(AMyGameMode* InputGameMode);

};
