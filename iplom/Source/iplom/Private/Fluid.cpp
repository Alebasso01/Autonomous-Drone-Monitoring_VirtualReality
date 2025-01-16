// Fill out your copyright notice in the Description page of Project Settings.


#include "Fluid.h"

// Sets default values
AFluid::AFluid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Default fluid properties
    FluidHeight = 0.0f;
    FluidFillRate = 10.0f;  // Example fill rate (height per second)
    FluidConsumptionRate = 5.0f;  // Example consumption rate (height per second)
    MaxFluidHeight = 1000.0f;  // Example max height

    // Create Niagara Component
    NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    RootComponent = NiagaraComponent;  // Set Niagara as root component

    NiagaraSystem = nullptr;  // Initialize Niagara System to null
}

// Called when the game starts or when spawned
void AFluid::BeginPlay()
{
	Super::BeginPlay();

    // get a pointer of the niagara system of this actor
    //NiagaraSystem = Cast<UNiagaraSystem>(NiagaraComponent->Asset);

	/*
		// Initialize the Niagara Component with the Niagara System
		if (NiagaraSystem)
		{
			NiagaraComponent->SetAsset(NiagaraSystem);
		}

		USceneComponent* ChildComponent = NiagaraComponent->GetChildComponent(0);

		if (ChildComponent)
			UE_LOG(LogTemp, Warning, TEXT("Eccomi"));
	*/
	
}

// Called every frame
void AFluid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // Update the fluid height based on the filling and consumption rates
    FluidHeight += FluidFillRate * DeltaTime; // Add fill rate
    FluidHeight -= FluidConsumptionRate * DeltaTime; // Subtract consumption rate

    // Clamp the fluid height to ensure it doesn't go below 0 or above the max height
    FluidHeight = FMath::Clamp(FluidHeight, 0.0f, MaxFluidHeight);

    // Update the Niagara system with the new fluid height
    UpdateNiagaraGridExtent(DeltaTime);
}

// Update the World Grid Extent (height) in the Niagara system
void AFluid::UpdateNiagaraGridExtent(float DeltaTime)
{
    if (NiagaraComponent)
    {
        // Imposta la variabile WorldGridExtent nel sistema Niagara
        // La variabile WorldGridExtent � un parametro Vector, quindi lo impostiamo con il FluidHeight
        FVector GridExtent = FVector(1000.0f, 1000.0f, FluidHeight);  // Cambia i valori 1000.0f se hai un altro parametro per larghezza e profondit�

        // Imposta il parametro 'WorldGridExtent' nel Niagara Component
        NiagaraComponent->SetVectorParameter(TEXT("World Grid Extents"), GridExtent);
    }
}