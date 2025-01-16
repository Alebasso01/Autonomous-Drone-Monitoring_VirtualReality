// Fill out your copyright notice in the Description page of Project Settings.


#include "LeakageSimulation.h"

// Sets default values
ALeakageSimulation::ALeakageSimulation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALeakageSimulation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALeakageSimulation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

