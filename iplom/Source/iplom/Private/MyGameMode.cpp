#include "MyGameMode.h"

AMyGameMode::AMyGameMode()
{
    MyFluid = nullptr;
    MyTank = nullptr;
    MyFountain = nullptr;
    MyRoof = nullptr;
    bFountainSpawned = false;
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
    FRotator RotationRoof = FRotator(0.0f, 0.0f, 30.0f);


    // Spawn the actors
    MyFluid = Cast<AFluid>(GetWorld()->SpawnActor<AFluid>(FluidClass, SpawnPosition + FVector(0.0f, 0.0f, 800.0f), Rotation));
    MyTank = Cast<ATank>(GetWorld()->SpawnActor<ATank>(TankClass, SpawnPosition, Rotation));
    MyRoof = Cast<ARooftop>(GetWorld()->SpawnActor<ARooftop>(RooftopClass, SpawnPosition + FVector(0.0f, 0.0f, 800.0f), RotationRoof));
    MyFountain = Cast<AFountain>(GetWorld()->SpawnActor<AFountain>(FountainClass, SpawnPosition + FVector(0.0f, 0.0f, 500.0f), Rotation));

    MyFountain->SetActorHiddenInGame(true);

    MyFluid->SetGameMode(this);


    if (MyFluid)
    {
        MyRoof->FluidReference = MyFluid;
        MoveFluid();
    }
}

void AMyGameMode::MoveFluid()
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
    MyRoof->UpdateRotation(DeltaTime, MyFluid->bMovingUp);    
}

void AMyGameMode::UpdateFountainVisibility()
{
    if (MyFountain->IsHidden())
    {
        MyFountain->SetActorHiddenInGame(false);
        MyFluid->SetStopMoving(true);
        GetWorld()->GetTimerManager().SetTimer(Timer, this, &AMyGameMode::UpdateFountainVisibility, 5.0f, false);
    }
    else
    {
        MyFountain->SetActorHiddenInGame(true);
        MyFluid->SetStopMoving(false);

    }
    
}




