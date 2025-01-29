#include "MyGameMode.h"

AMyGameMode::AMyGameMode()
{
    bFountainSpawned = false;
    NumberOfTanks = 5;
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


    FVector SpawnPositionTank1 = FVector(9050.0f, -23730.0f, -185480.0f);
    FVector SpawnPositionTank2 = FVector(8770.0f, -29780.0f, -185480.0f);
    FVector SpawnPositionTank3 = FVector(8980.0f, -35630.0f, -185450.0f);
    FVector SpawnPositionTank4 = FVector(8720.0f, -41370.0f, -185500.0f);
    FVector SpawnPositionTank5 = FVector(9110.0f, -46660.0f, -185500.0f);

    PositionArray.Add(SpawnPositionTank1);
    PositionArray.Add(SpawnPositionTank2);
    PositionArray.Add(SpawnPositionTank3);
    PositionArray.Add(SpawnPositionTank4);
    PositionArray.Add(SpawnPositionTank5);


    FVector ScaleTank1 = FVector(3.2f, 3.2f, 1.2f);
    FVector ScaleTank234 = FVector(2.8f, 2.8f, 1.2f);
    FVector ScaleTank5 = FVector(2.3f, 2.3f, 1.2f);

    ScaleTankArray.Add(ScaleTank1);
    ScaleTankArray.Add(ScaleTank234);
    ScaleTankArray.Add(ScaleTank234);
    ScaleTankArray.Add(ScaleTank234);
    ScaleTankArray.Add(ScaleTank5);

    FVector FluidSize1 = FVector(4000.0f, 4000.0f, 0.0f);
    FVector FluidSize234 = FVector(3500.0f, 3500.0f, 0.0f);
    FVector FluidSize5 = FVector(3000.0f, 3000.0f, 0.0f);

    ScaleFluidArray.Add(FluidSize1);
    ScaleFluidArray.Add(FluidSize234);
    ScaleFluidArray.Add(FluidSize234);
    ScaleFluidArray.Add(FluidSize234);
    ScaleFluidArray.Add(FluidSize5);

    FVector ScaleFountain = FVector(8.0f, 8.0f, 5.0f);


    ATank* SpawnedTank;
    AFluid* SpawnedFluid;
    ARooftop* SpawnedRoof;
    AFountain* SpawnedFountain;

    NumberOfTanks = FMath::Clamp(NumberOfTanks, 0, 5);

    FVector Increment = FVector(0.0f, 0.0f, 800.0f);
    FVector FountainIncrement = Increment + FVector(1200.0f, 0.0f, 300.0f);
    FVector RooftopBaseOffset = FVector(-500.0f, 0.0f, 0.0f);
    FVector RoofHeighOffset = FVector(0.0f, 0.0f, 50.0f);

    FVector RoofSpawnPosition;
    speed = 60.0f;

    for(int i=0; i<NumberOfTanks; i++)
    {
        SpawnedTank = Cast<ATank>(GetWorld()->SpawnActor<ATank>(TankClass, PositionArray[i], Rotation));
        SpawnedTank->SetActorScale3D(ScaleTankArray[i]);
        TankArray.Add(SpawnedTank);

        SpawnedFluid = Cast<AFluid>(GetWorld()->SpawnActor<AFluid>(FluidClass, PositionArray[i] + Increment, Rotation));
        SpawnedFluid->UpdateNiagaraGridExtent(ScaleFluidArray[i]);
        FluidArray.Add(SpawnedFluid);
        //SpawnedFluid->SetGameMode(this);
        //SpawnedFluid->SetMovementSpeed(speed);


        RoofSpawnPosition = PositionArray[i] + Increment + RooftopBaseOffset * ScaleTankArray[i].X * 1.185 + RoofHeighOffset;

        SpawnedRoof = Cast<ARooftop>(GetWorld()->SpawnActor<ARooftop>(RooftopClass, RoofSpawnPosition, Rotation));
        SpawnedRoof->SetActorScale3D(ScaleTankArray[i] * 1.185);
        //SpawnedRoof->SetActorScale3D(ScaleTankArray[i]);
        RoofArray.Add(SpawnedRoof);
        SpawnedRoof->FluidReference = SpawnedFluid;
        SpawnedRoof->SetScaleRoof(ScaleTankArray[i].X * 1.185);
        SpawnedRoof->SetMovementSpeed(speed);


        SpawnedFountain = Cast<AFountain>(GetWorld()->SpawnActor<AFountain>(FountainClass, PositionArray[i] + FountainIncrement, Rotation));
        FountainArray.Add(SpawnedFountain);
        SpawnedFountain->SetActorScale3D(ScaleFountain);
        SpawnedFountain->SetActorHiddenInGame(true);
    }    
    MoveFluid();

}

void AMyGameMode::MoveFluid()
{
    float DeltaTime = GetWorld()->GetDeltaSeconds();

    for (int i = 0; i < NumberOfTanks; i++)
    {
        if (FluidArray[i]->bMovingUp)
        {
            FluidArray[i]->MoveUp(DeltaTime);
        }
        else
        {
            FluidArray[i]->MoveDown(DeltaTime);
        }
        RoofArray[i]->MoveAndRotate(FluidArray[i]->bMovingUp);
    }

}

void AMyGameMode::UpdateFountainVisibility(AFluid* Fluid)
{
    int i = FluidArray.Find(Fluid);
    
    if (FountainArray[i]->IsHidden())
    {
        FountainArray[i]->SetActorHiddenInGame(false);
        Fluid->SetStopMoving(true);
        /*
        GetWorld()->GetTimerManager().SetTimer(
            Timer,
            [this, Fluid]() {
                UpdateFountainVisibility(Fluid);
            },
            5.0f,
            false
        );
        */
    }
    else
    {
        FountainArray[i]->SetActorHiddenInGame(true);
        Fluid->SetStopMoving(false);
    }
}
    




