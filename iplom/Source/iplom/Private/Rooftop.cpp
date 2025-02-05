// Fill out your copyright notice in the Description page of Project Settings.


#include "Rooftop.h"

// Sets default values
ARooftop::ARooftop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    MaxRotation = 10.0f;
    OriginalRotation = 5.0f;
    RotationSpeed = 3.0f;
    MovementSpeed = 0.0f;  
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

    // Get current position and rotation
    FVector CurrentPosition = GetActorLocation();
    FRotator CurrentRotation = GetActorRotation();

    // Get fluid's position
    FVector FluidPosition = FluidReference->GetActorLocation();
    float RooftopHeightOffset = 0.0f;
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

void ARooftop::SetMovementSpeed(float speed)
{
    MovementSpeed = speed;
}
