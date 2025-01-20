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

    // Spawn the actors
    MyFluid = Cast<AFluid>(GetWorld()->SpawnActor<AFluid>(FluidClass, SpawnPosition + FVector(0.0f, 0.0f, 500.0f), Rotation));
    MyTank = Cast<ATank>(GetWorld()->SpawnActor<ATank>(TankClass, SpawnPosition, Rotation));
    MyRoof = Cast<ARooftop>(GetWorld()->SpawnActor<ARooftop>(RooftopClass, SpawnPosition + FVector(0.0f, 0.0f, 500.0f), Rotation));
    MyFountain = Cast<AFountain>(GetWorld()->SpawnActor<AFountain>(FountainClass, SpawnPosition + FVector(0.0f, 0.0f, 500.0f), Rotation));

    MyFountain->SetActorHiddenInGame(true);

    MyFluid->SetGameMode(this);


    if (MyFluid)
    {
        //GetWorld()->GetTimerManager().SetTimer(Timer, this, &AMyGameMode::MoveFluid, 0.02f, true);
        MyRoof->FluidReference = MyFluid;
        MoveFluid();


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

        // UpdateFountainVisibility();
    }
}

void AMyGameMode::UpdateFountainVisibility()
{
    if (MyFluid && MyFountain)
    {

        // FVector CurrentPosition = MyFluid->GetActorLocation();
        // float Tolerance = 20.0f; 

        // if (FMath::Abs(CurrentPosition.Z - MyFluid->EndPositionUp.Z) <= Tolerance)
        if (MyFountain->IsHidden())
        {
            MyFountain->SetActorHiddenInGame(false); 
            MyFluid->SetStopMoving(true);
            GetWorld()->GetTimerManager().SetTimer(Timer, this, &AMyGameMode::UpdateFountainVisibility, 5.0f, true);
        }
        else
        {
            MyFountain->SetActorHiddenInGame(true); 
            MyFluid->SetStopMoving(false);

        }
    }
}




