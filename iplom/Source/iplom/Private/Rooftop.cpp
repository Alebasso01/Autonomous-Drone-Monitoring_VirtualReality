// Fill out your copyright notice in the Description page of Project Settings.


#include "Rooftop.h"

// Sets default values
ARooftop::ARooftop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    MaxRotation = 30.0f;
    OriginalRotation = 0.0f;
    RotationSpeed = 5.0f;
    MovementSpeed = 30.0f;  
    FluidReference = nullptr;

}

// Called when the game starts or when spawned
void ARooftop::BeginPlay()
{
	Super::BeginPlay();

    OriginPosition = GetActorLocation();

    // movement endpoints
    EndPositionUp = OriginPosition + FVector(0, 0, 100);
    EndPositionDown = OriginPosition - FVector(0, 0, 200);
	
}

// Called every frame
void ARooftop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    if(FluidReference)
        UpdateRotation(GetWorld()->GetDeltaSeconds(), FluidReference->bMovingUp);
}

void ARooftop::UpdateRotation(float DeltaTime, bool bFluidMovingUp)
{
    // Get current position and rotation
    FVector CurrentPosition = GetActorLocation();
    FRotator CurrentRotation = GetActorRotation();

    // Get fluid's position
    FVector FluidPosition = FluidReference->GetActorLocation();

    FVector NewPosition = GetActorLocation();
    NewPosition.Z = FluidPosition.Z + 50.0f;  // Offset to keep roof above fluid

    // Calculate target rotation based on movement direction
    float TargetRotation;

    if (bFluidMovingUp)
    {
        // When moving up, interpolate towards MaxRotation
        TargetRotation = FMath::FInterpConstantTo(
            CurrentRotation.Pitch,  // Current rotation
            MaxRotation,           
            DeltaTime,
            RotationSpeed
        );
    }
    else
    {
        // When moving down, interpolate towards 0
        TargetRotation = FMath::FInterpConstantTo(
            CurrentRotation.Pitch,  // Current rotation
            OriginalRotation,                  
            DeltaTime,
            RotationSpeed
        );
    }

    // Set new position and rotation
    SetActorLocation(NewPosition);
    SetActorRotation(FRotator(TargetRotation, 0.0f, 0.0f));
}
