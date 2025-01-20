#include "MyGameMode.h"

AMyGameMode::AMyGameMode()
{
    MyFluid = nullptr;
    MyTank = nullptr;
    MyFountain = nullptr;
    MyRoof = nullptr;

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

    // Spawn the actors
    MyFluid = Cast<AFluid>(GetWorld()->SpawnActor<AFluid>(FluidClass, SpawnPosition + FVector(0.0f, 0.0f, 500.0f), Rotation));
    MyTank = Cast<ATank>(GetWorld()->SpawnActor<ATank>(TankClass, SpawnPosition, Rotation));
    MyFountain = Cast<AFountain>(GetWorld()->SpawnActor<AFountain>(FountainClass, SpawnPosition + FVector(0.0f, 0.0f, 500.0f), Rotation));
    MyRoof = Cast<ARooftop>(GetWorld()->SpawnActor<ARooftop>(RooftopClass, SpawnPosition + FVector(0.0f, 0.0f, 500.0f), Rotation));


    if (MyFluid)
    {
        GetWorld()->GetTimerManager().SetTimer(Timer, this, &AMyGameMode::MoveFluid, 0.02f, true);
        MyRoof->FluidReference = MyFluid;

    }
}

void AMyGameMode::MoveFluid()
{
    if (MyFluid && MyRoof)
    {
        float DeltaTime = GetWorld()->GetDeltaSeconds();

        // Handle fluid movement
        if (MyFluid->bMovingUp)
        {
            MyFluid->MoveUp(DeltaTime);
        }
        else
        {
            MyFluid->MoveDown(DeltaTime);
        }

        // Update roof
        MyRoof->UpdateRotation(DeltaTime, MyFluid->bMovingUp);
    }

}

