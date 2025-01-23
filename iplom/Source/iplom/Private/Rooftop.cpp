// Fill out your copyright notice in the Description page of Project Settings.


#include "Rooftop.h"

// Sets default values
ARooftop::ARooftop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    MaxRotation = 10.0f;
    OriginalRotation = 0.0f;
    RotationSpeed = 3.0f;
    MovementSpeed = 100.0f;  
    FluidReference = nullptr;

    ScaleRoof = 1.0f;

}

// Called when the game starts or when spawned
void ARooftop::BeginPlay()
{
	Super::BeginPlay();

    OriginPosition = GetActorLocation();
	
}

// Called every frame
void ARooftop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    if(FluidReference->bStopMoving == false)
        MoveAndRotate(FluidReference->bMovingUp);
}

void ARooftop::MoveAndRotate(bool bFluidMovingUp)
{
    /*
    // Get current position and rotation
    FVector CurrentPosition = GetActorLocation();
    FRotator CurrentRotation = GetActorRotation();

    PivotOffset = FVector(-500.0f, 0.0f, 0.0f); // Offset in X direction, adjust as needed
    FVector PivotPoint = CurrentPosition + PivotOffset;

    // Get fluid's position
    FVector FluidPosition = FluidReference->GetActorLocation();

    //FVector NewPosition = GetActorLocation();
    //NewPosition.Z = FluidPosition.Z + 50.0f;  // Offset to keep roof above fluid

    // Calculate target rotation based on movement direction
    float TargetRotation;

    if (bFluidMovingUp)
    {
        // When moving up, interpolate towards MaxRotation
        TargetRotation = FMath::FInterpConstantTo(
            CurrentRotation.Pitch,  // Current rotation
            MaxRotation,
            GetWorld()->GetDeltaSeconds(),
            RotationSpeed
        );
    }
    else
    {
        // When moving down, interpolate towards 0
        TargetRotation = FMath::FInterpConstantTo(
            CurrentRotation.Pitch,  // Current rotation
            OriginalRotation,
            GetWorld()->GetDeltaSeconds(),
            RotationSpeed
        );
    }

    FRotator DeltaRotation(TargetRotation - CurrentRotation.Pitch, 0.0f, 0.0f);
    FVector NewPosition = PivotPoint + (CurrentPosition - PivotPoint).RotateAngleAxis(
        DeltaRotation.Pitch,
        FVector(0.0f, 1.0f, 0.0f)  // Rotate around Y axis since we're changing Pitch
    );

    NewPosition.Z = FluidPosition.Z + 50.0f;


    // Set new position and rotation
    SetActorLocation(NewPosition);
    SetActorRotation(FRotator(TargetRotation, 0.0f, 0.0f));
    */

    // Get current position and rotation
    FVector CurrentPosition = GetActorLocation();
    FRotator CurrentRotation = GetActorRotation();

    // Get fluid's position
    FVector FluidPosition = FluidReference->GetActorLocation();
    float RooftopHeightOffset = 50.0f;
    float RooftopBaseOffset = -500.0f; // to be adjusted, and why this number? Also in MyGameMode.cpp, line 70

    // Next rotation
    // FRotator TargetRotation = bFluidMovingUp ? FRotator(0.0f, OriginalRotation, 0.0f) : FRotator(0.0f, MaxRotation, 0.0f);
    FRotator TargetRotation;
    if (bFluidMovingUp)
        TargetRotation = FRotator(MaxRotation, 0.0f, 0.0f);
    else
        TargetRotation = FRotator(OriginalRotation, 0.0f, 0.0f);
    FRotator NewRotation = FMath::RInterpConstantTo(CurrentRotation, TargetRotation, GetWorld()->GetDeltaSeconds(), RotationSpeed);


    // Next location
    
    /*
    // Rooftop radius = 5 m -> 500 cm = 500 Unreal Engine units
    float NewHeight = 500.0f * FMath::Sin(TargetRotation.Pitch);
    float NewBasePositioning = 500.0f * FMath::Cos(TargetRotation.Pitch);
    FVector TargetPosition = FluidPosition + FVector(NewBasePositioning - 500.0f, 0.0f, NewHeight + RooftopHeightOffset);
    float ipotenusa = FMath::Sqrt(NewHeight * NewHeight + (NewBasePositioning - 500.0f) * (NewBasePositioning - 500.0f));
    MovementSpeed = 100.0f * ipotenusa / NewHeight;
    */

    FVector TargetPosition;
    if(bFluidMovingUp)
        TargetPosition = FluidReference->EndPositionUp + FVector(RooftopBaseOffset * ScaleRoof, 0.0f, RooftopHeightOffset);
    else
        TargetPosition = FluidReference->EndPositionDown + FVector(RooftopBaseOffset * ScaleRoof, 0.0f, RooftopHeightOffset);
    FVector NewPosition = FMath::VInterpConstantTo(CurrentPosition, TargetPosition, GetWorld()->GetDeltaSeconds(), MovementSpeed);


    // Set new position and rotation
    SetActorLocation(NewPosition);
    SetActorRotation(NewRotation);
}

void ARooftop::SetScaleRoof(float scale)
{
    ScaleRoof = scale;
}
