// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "Fluid.generated.h"

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

    // Fluid properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fluid")
    float FluidHeight;  // Current height of the fluid

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fluid")
    float FluidFillRate;  // Rate at which the fluid fills up (height per second)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fluid")
    float FluidConsumptionRate;  // Rate at which the fluid is consumed (height per second)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fluid")
    float MaxFluidHeight;  // Maximum possible fluid height

    // Niagara system reference
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fluid")
    UNiagaraSystem* NiagaraSystem;

    // Niagara component to apply the fluid's behavior
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fluid")
    UNiagaraComponent* NiagaraComponent;


    // Function to handle the movement logic
    // Move the actor up and down based on movement direction
    void MoveUp(float DeltaTime);
    void MoveDown(float DeltaTime);

    // Target positions for up and down movement
    FVector OriginPosition;
    FVector EndPositionUp;
    FVector EndPositionDown;

    // Boolean to track the current direction (up or down)
    float MovementRange;
    float MovementSpeed;
    bool bMovingUp;
    // Update the Niagara World Grid Extent (Z-axis height) based on FluidHeight
    void UpdateNiagaraGridExtent(float DeltaTime);

    

};
