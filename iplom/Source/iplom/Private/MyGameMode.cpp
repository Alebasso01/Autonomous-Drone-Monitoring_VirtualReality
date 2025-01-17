// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"

AMyGameMode::AMyGameMode()
{
    MyFluid = nullptr;
    MyTank = nullptr;
    MyFountain = nullptr;
}

AMyGameMode::~AMyGameMode()
{
}

void AMyGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Default Position and Rotation
    // FVector SpawnPosition = FVector(9460.0f, -47140.0f, -183510.0f);
    FVector SpawnPosition = FVector(0.0f, 0.0f, 0.0f);
    FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);

    // Spawn the fluid actor
    MyFluid = Cast<AFluid>(GetWorld()->SpawnActor<AFluid>(FluidClass, SpawnPosition + FVector(0.0f, 0.0f, 900.0f), Rotation));
    MyTank = Cast<ATank>(GetWorld()->SpawnActor<ATank>(TankClass, SpawnPosition, Rotation));
    MyFountain = Cast<AFountain>(GetWorld()->SpawnActor<AFountain>(FountainClass, SpawnPosition + FVector(0.0f, 0.0f, 900.0f), Rotation));

    GetWorldTimerManager().SetTimer(Timer, this, &AMyGameMode::MoveFluid, 4.0f, false);
}

void AMyGameMode::MoveFluid()
{
    MyFluid->SetMovementEndPosition(MyFluid->GetActorLocation() + FVector(0.0f, 0.0f, 400.0f));
    MyFluid->setMoving(true);
    GetWorldTimerManager().SetTimer(Timer, this, &AMyGameMode::StopFluid, 10.0f, false);
}

void AMyGameMode::StopFluid()
{
    MyFluid->setMoving(false);
    GetWorldTimerManager().SetTimer(Timer, this, &AMyGameMode::MoveFluid, 4.0f, false);
}
