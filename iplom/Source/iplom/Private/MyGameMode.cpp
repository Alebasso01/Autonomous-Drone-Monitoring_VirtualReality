// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

AMyGameMode::AMyGameMode()
{
    MyFluid = nullptr;
}

AMyGameMode::~AMyGameMode()
{
}

void AMyGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Default Position and Rotation
    FVector SpawnPosition = FVector(9460.0f, -47140.0f, -183510.0f);
    FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);

    // Spawn the fluid actor
    MyFluid = Cast<AFluid>(GetWorld()->SpawnActor<AFluid>(FluidClass, SpawnPosition, Rotation));
    MyTank = Cast<ATank>(GetWorld()->SpawnActor<ATank>(TankClass, SpawnPosition, Rotation));
}
