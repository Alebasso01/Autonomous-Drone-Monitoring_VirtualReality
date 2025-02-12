// Fill out your copyright notice in the Description page of Project Settings.


#include "Fluid.h"
#include "OilRefinery.h"

// Sets default values
AFluid::AFluid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    MovementSpeed = 0.0f; 
    bMovingUp = true;
    bStopMoving = false;
    bLeacking = false;
    RandomID = 0;
    OilRefinery = nullptr;
}

// Called when the game starts or when spawned
void AFluid::BeginPlay()
{
	Super::BeginPlay();

    // Set the origin position
    OriginPosition = GetActorLocation();

    // Calculate the end positions for up and down movement
    if (OriginPosition.Z > 750)
    {
        EndPositionUp = OriginPosition;
        EndPositionDown = OriginPosition - FVector(0, 0, 300);
        bMovingUp = false;
    }
    else
    {
        EndPositionUp = OriginPosition + FVector(0, 0, 300);
        EndPositionDown = OriginPosition;
        bMovingUp = true;
    }
}

// Called every frame
void AFluid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (bMovingUp)
         MoveUp(DeltaTime);
    else
         MoveDown(DeltaTime);

    CheckForFountainSpawn();
}


// Move the fluid up
void AFluid::MoveUp(float DeltaTime)
{
    if (!bStopMoving)
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
}

// Move the fluid down
void AFluid::MoveDown(float DeltaTime)
{
    if (!bStopMoving)
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
}

void AFluid::SetStopMoving(bool NewMovingState)
{
    bStopMoving = NewMovingState;
}

void AFluid::CheckForFountainSpawn()
{
    if (!bStopMoving)
    {
        FVector CurrentPosition = GetActorLocation();
        float Tolerance = 0.05f;

        if (FMath::Abs(CurrentPosition.Z - EndPositionUp.Z) <= Tolerance && !bLeacking)
        {
            RandomID = FMath::RandRange(1, 4);
            if (RandomID == 1) 
            {
                bLeacking = true;
                OilRefinery->SpawnFountainForFluid(this);
            }

        }
        else if (FMath::Abs(CurrentPosition.Z - EndPositionUp.Z) > Tolerance && bLeacking)
            bLeacking = false;
    }
}

void AFluid::SpawnFountainSelf()
{
    OilRefinery->SpawnFountainForFluid(this);
}

void AFluid::SetOilRefinery(AOilRefinery* InputOilRefinery)
{
    this->OilRefinery = InputOilRefinery;
}

void AFluid::SetMovementSpeed(float speed)
{
    MovementSpeed = speed;
}
