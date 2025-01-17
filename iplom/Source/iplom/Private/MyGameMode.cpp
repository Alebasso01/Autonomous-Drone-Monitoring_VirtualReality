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
    FVector SpawnPosition = FVector(0.0f, 0.0f, 0.0f);
    FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);

    // Spawn the fluid actor
    MyFluid = Cast<AFluid>(GetWorld()->SpawnActor<AFluid>(FluidClass, SpawnPosition + FVector(0.0f, 0.0f, 900.0f), Rotation));
    MyTank = Cast<ATank>(GetWorld()->SpawnActor<ATank>(TankClass, SpawnPosition, Rotation));
    MyFountain = Cast<AFountain>(GetWorld()->SpawnActor<AFountain>(FountainClass, SpawnPosition + FVector(0.0f, 0.0f, 900.0f), Rotation));

    if (MyFluid)
    {
        // No need to initialize movement here, since MovementSpeed is now global
        // Set the fluid movement to be updated every frame
        GetWorld()->GetTimerManager().SetTimer(Timer, this, &AMyGameMode::MoveFluid, 0.02f, true);
    }
}

void AMyGameMode::MoveFluid()
{
    if (MyFluid)
    {
        // Call MoveUp or MoveDown based on bMovingUp flag
        if (MyFluid->bMovingUp)
        {
            MyFluid->MoveUp(GetWorld()->GetDeltaSeconds());
        }
        else
        {
            MyFluid->MoveDown(GetWorld()->GetDeltaSeconds());
        }
    }
}

