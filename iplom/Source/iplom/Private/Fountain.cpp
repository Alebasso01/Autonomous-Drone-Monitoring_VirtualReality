// Fill out your copyright notice in the Description page of Project Settings.

#include "Fountain.h"
#include "OilRefinery.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"  // For logging

// Sets default values
AFountain::AFountain()
{
    // Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;


    /*


    // Create the Static Mesh Component and set it as the Root Component.
    StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
    RootComponent = StaticMeshComp;

    // Optionally, set a default mesh for the Static Mesh Component.
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Engine/EngineMeshes/Sphere.Sphere'"));
    if (MeshAsset.Succeeded())
    {
        StaticMeshComp->SetStaticMesh(MeshAsset.Object);
    }

    // Load the material from the specified path
    static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("Material'/Game/M_Fountain.M_Fountain'"));
    if (MaterialAsset.Succeeded())
    {
        // Set the loaded material to the Static Mesh Component
        StaticMeshComp->SetMaterial(0, MaterialAsset.Object);  // 0 is the material index
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to load material"));
    }

    // Create a collision box and attach it to the root component
    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    // RootComponent = CollisionBox;
    CollisionBox->SetupAttachment(RootComponent);

    // Set collision properties
    CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);  // Only query for collision detection
    CollisionBox->SetCollisionResponseToAllChannels(ECR_Overlap);     // Detect overlaps without blocking movement

    // Set the size of the box (note that BoxExtent is half the size of the box in each dimension)
    CollisionBox->SetBoxExtent(FVector(200.0f, 200.0f, 3000.0f));

    // Bind the overlap event to a function
    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AFountain::OnOverlapBegin);


    */

    OilRefinery = nullptr;
    LeakageFilePath = FPaths::ProjectSavedDir() + "leakage.txt";
}

// Called when the game starts or when spawned
void AFountain::BeginPlay()
{
    Super::BeginPlay();

    //StaticMeshComp->SetRelativeLocation(FVector());
    // StaticMeshComp->SetRelativeScale3D(FVector(0.01f, 0.01f, 0.01f));

    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if (PlatformFile.FileExists(*LeakageFilePath))
    {
        PlatformFile.DeleteFile(*LeakageFilePath);
    }

    // Optionally log that the fountain has spawned and is ready
    UE_LOG(LogTemp, Warning, TEXT("Fountain spawned and ready for collisions"));
}

// Called every frame
void AFountain::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Called when an overlap begins with the collision box
void AFountain::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
    UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex,
    bool bFromSweep, const FHitResult& SweepResult)
{
    // Only the drone is allowed to trigger the collision method
    //if (OtherActor && OilRefinery && OtherActor != OilRefinery->Drone)
      //  return;

    if (OilRefinery && OtherActor == OilRefinery->Drone)
    {
        UE_LOG(LogTemp, Warning, TEXT("Collision detected with %s"), *OtherActor->GetName());

        // Save the string to the file
        int ID = OilRefinery->GetTankID(this);
        FString Content = FString::Printf(TEXT("Leakage detected on tank: %d"), ID);
        FFileHelper::SaveStringToFile(Content, *LeakageFilePath);
        UE_LOG(LogTemp, Warning, TEXT("%s"), *Content);
    }
}

void AFountain::SetOilRefinery(AOilRefinery* OilRefineryPtr)
{
    OilRefinery = OilRefineryPtr;
}
