#include "MyGameMode.h"

AMyGameMode::AMyGameMode()
{
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

    ATank* SpawnedTank;
    AFluid* SpawnedFluid;
    ARooftop* SpawnedRoof;
    AFountain* SpawnedFountain;


    for(int i=0; i<5; i++)
    {
        FVector Increment = FVector(0.0f, 0.0f, 800.0f);
        FVector FountainIncrement = Increment + FVector(0.0f, 0.0f, 100.0f);
        FVector SpawnOffset = FVector(2000.0f, 0.0f, 0.0f);

        SpawnedTank = Cast<ATank>(GetWorld()->SpawnActor<ATank>(TankClass, SpawnPosition + i* SpawnOffset, Rotation));
        TankArray.Add(SpawnedTank);

        SpawnedFluid = Cast<AFluid>(GetWorld()->SpawnActor<AFluid>(FluidClass, SpawnPosition + Increment + i * SpawnOffset, Rotation));
        FluidArray.Add(SpawnedFluid);
        SpawnedFluid->SetGameMode(this);

        SpawnedRoof = Cast<ARooftop>(GetWorld()->SpawnActor<ARooftop>(RooftopClass, SpawnPosition + Increment + i * SpawnOffset, Rotation));
        RoofArray.Add(SpawnedRoof);
        SpawnedRoof->FluidReference = SpawnedFluid;

        SpawnedFountain = Cast<AFountain>(GetWorld()->SpawnActor<AFountain>(FountainClass, SpawnPosition + FountainIncrement + i * SpawnOffset, Rotation));
        FountainArray.Add(SpawnedFountain);
        SpawnedFountain->SetActorHiddenInGame(true);
    }    
    MoveFluid();

}

void AMyGameMode::MoveFluid()
{
    float DeltaTime = GetWorld()->GetDeltaSeconds();

    for (int i = 0; i < 5; i++)
    {
        if (FluidArray[i]->bMovingUp)
        {
            FluidArray[i]->MoveUp(DeltaTime);
        }
        else
        {
            FluidArray[i]->MoveDown(DeltaTime);
        }
        RoofArray[i]->UpdateRotation(DeltaTime, FluidArray[i]->bMovingUp);
    }

}

void AMyGameMode::UpdateFountainVisibility(AFluid* Fluid)
{
    int i = FluidArray.Find(Fluid);
    
    if (FountainArray[i]->IsHidden())
    {
        FountainArray[i]->SetActorHiddenInGame(false);
        Fluid->SetStopMoving(true);

        GetWorld()->GetTimerManager().SetTimer(
            Timer,
            [this, Fluid]() {
                UpdateFountainVisibility(Fluid);
            },
            5.0f,
            false
        );
    }
    else
    {
        FountainArray[i]->SetActorHiddenInGame(true);
        Fluid->SetStopMoving(false);
    }
}
    




