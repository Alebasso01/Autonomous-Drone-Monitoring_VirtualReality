// Fill out your copyright notice in the Description page of Project Settings.


#include "Fluid.h"

// Sets default values
AFluid::AFluid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    NiagaraSystem = nullptr;  
    NiagaraComponent = nullptr;  

    MovementSpeed = 100.0f; 
    MovementRange = 400.0f;
    bMovingUp = true;
    bStopMoving = false;
}

// Called when the game starts or when spawned
void AFluid::BeginPlay()
{
	Super::BeginPlay();

    // Set the origin position
    OriginPosition = GetActorLocation();

    // Calculate the end positions for up and down movement
    EndPositionUp = OriginPosition + FVector(0, 0, MovementRange);
    EndPositionDown = OriginPosition - FVector(0, 0, MovementRange);

    // Set initial direction
    bMovingUp = true;

   
}

// Called every frame
void AFluid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (!bStopMoving)
    {
        if (bMovingUp)
            MoveUp(DeltaTime);
        else
            MoveDown(DeltaTime);
    }

}



// Move the fluid up
void AFluid::MoveUp(float DeltaTime)
{
    FVector CurrentPosition = GetActorLocation();
    FVector TargetPosition = EndPositionUp;

    // If the actor reaches or exceeds the end position, change direction
    if (CurrentPosition.Z >= EndPositionUp.Z)
    {
        bMovingUp = false;
    }

    // Interpolate towards the target position for smooth movement
    FVector NewPosition = FMath::VInterpConstantTo(CurrentPosition, TargetPosition, DeltaTime, MovementSpeed);

    // Set the new position
    SetActorLocation(NewPosition);

}

// Move the fluid down
void AFluid::MoveDown(float DeltaTime)
{
    FVector CurrentPosition = GetActorLocation();
    FVector TargetPosition = EndPositionDown;

    // If the actor reaches or falls below the end position, change direction
    if (CurrentPosition.Z <= EndPositionDown.Z)
    {
        bMovingUp = true;
    }

    // Interpolate towards the target position for smooth movement
    FVector NewPosition = FMath::VInterpConstantTo(CurrentPosition, TargetPosition, DeltaTime, MovementSpeed);

    // Set the new position
    SetActorLocation(NewPosition);

}

void AFluid::SetStopMoving(bool NewMovingState)
{
    bStopMoving = NewMovingState;
}
