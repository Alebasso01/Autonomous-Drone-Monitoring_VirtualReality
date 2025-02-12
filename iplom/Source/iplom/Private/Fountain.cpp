// Fill out your copyright notice in the Description page of Project Settings.

#include "Fountain.h"
#include "OilRefinery.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"  // For logging

// Sets default values
AFountain::AFountain()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    OilRefinery = nullptr;
}

// Called when the game starts or when spawned
void AFountain::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AFountain::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
