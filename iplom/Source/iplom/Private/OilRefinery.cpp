// Fill out your copyright notice in the Description page of Project Settings.


#include "OilRefinery.h"
#include "Windows/MinWindows.h"



// Sets default values
AOilRefinery::AOilRefinery()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    Drone = nullptr;
    UpdateCamera = false;

	bFountainSpawned = false;
	NumberOfTanks = 5;

    AlarmDuration = 15.0f;
    CurrentSound = nullptr;
}

// Called when the game starts or when spawned
void AOilRefinery::BeginPlay()
{
	Super::BeginPlay();

    AlarmSound = LoadObject<USoundCue>(nullptr, TEXT("/Script/Engine.SoundCue'/Game/AlarmCut_Cue.AlarmCut_Cue'"));

    FountainArray.Init(nullptr, 5);

    // Default Position and Rotation
    FVector SpawnPosition = FVector(0.0f, 0.0f, 0.0f);
    FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);


    FVector SpawnPositionFountain1 = FVector(-2550.0f, -2630.0f, 1250.0f);
    FVector SpawnPositionFountain2 = FVector(-3000.0f, -8550.0f, 1250.0f);
    FVector SpawnPositionFountain3 = FVector(-2950.0f, -14370.0f, 1250.0f);
    FVector SpawnPositionFountain4 = FVector(-3150.0f, -20020.0f, 1250.0f);
    FVector SpawnPositionFountain5 = FVector(-3050.0f, -25500.0f, 1250.0f);

    PositionArrayFountain.Add(SpawnPositionFountain1);
    PositionArrayFountain.Add(SpawnPositionFountain2);
    PositionArrayFountain.Add(SpawnPositionFountain3);
    PositionArrayFountain.Add(SpawnPositionFountain4);
    PositionArrayFountain.Add(SpawnPositionFountain5);



    FVector SpawnPositionTank1 = FVector(-4500.0f, -2630.0f, 550.0f);
    FVector SpawnPositionTank2 = FVector(-4840.0f, -8550.0f, 400.0f);
    FVector SpawnPositionTank3 = FVector(-4790.0f, -14370.0f, 400.0f);
    FVector SpawnPositionTank4 = FVector(-4930.0f, -20000.0f, 400.0f);
    FVector SpawnPositionTank5 = FVector(-4550.0f, -25500.0f, 400.0f);

    PositionArray.Add(SpawnPositionTank1);
    PositionArray.Add(SpawnPositionTank2);
    PositionArray.Add(SpawnPositionTank3);
    PositionArray.Add(SpawnPositionTank4);
    PositionArray.Add(SpawnPositionTank5);

    FVector IncrementFull = FVector(0.0f, 0.0f, 300.0f);

    FVector SpawnPositionRoof1 = FVector(-6700.0f, -2630.0f, 750.0f);
    FVector SpawnPositionRoof2 = FVector(-7000.0f, -8550.0f, 750.0f) + IncrementFull;
    FVector SpawnPositionRoof3 = FVector(-6850.0f, -14450.0f, 750.0f);
    FVector SpawnPositionRoof4 = FVector(-7050.0f, -20000.0f, 750.0f);
    FVector SpawnPositionRoof5 = FVector(-6350.0f, -25450.0f, 750.0f) + IncrementFull;

    PositionArrayRoof.Add(SpawnPositionRoof1);
    PositionArrayRoof.Add(SpawnPositionRoof2);
    PositionArrayRoof.Add(SpawnPositionRoof3);
    PositionArrayRoof.Add(SpawnPositionRoof4);
    PositionArrayRoof.Add(SpawnPositionRoof5);

    FVector SpawnPositionFluid1 = FVector(-4500.0f, -2630.0f, 700.0f);
    FVector SpawnPositionFluid2 = FVector(-4840.0f, -8500.0f, 700.0f) + IncrementFull;
    FVector SpawnPositionFluid3 = FVector(-4790.0f, -14370.0f, 700.0f);
    FVector SpawnPositionFluid4 = FVector(-4930.0f, -20000.0f, 700.0f);
    FVector SpawnPositionFluid5 = FVector(-4500.0f, -25500.0f, 700.0f) + IncrementFull;


    PositionArrayFluid.Add(SpawnPositionFluid1);
    PositionArrayFluid.Add(SpawnPositionFluid2);
    PositionArrayFluid.Add(SpawnPositionFluid3);
    PositionArrayFluid.Add(SpawnPositionFluid4);
    PositionArrayFluid.Add(SpawnPositionFluid5);

    FRotator Rotation1 = FRotator(0.0f, 0.0f, 0.0f);
    FRotator Rotation2 = FRotator(9.0f, 0.0f, 0.0f);
    FRotator Rotation3 = FRotator(0.0f, 0.0f, 0.0f);
    FRotator Rotation4 = FRotator(0.0f, 0.0f, 0.0f);
    FRotator Rotation5 = FRotator(9.0f, 0.0f, 0.0f);

    RotationArray.Add(Rotation1);
    RotationArray.Add(Rotation2);
    RotationArray.Add(Rotation3);
    RotationArray.Add(Rotation4);
    RotationArray.Add(Rotation5);


    FVector ScaleTank1 = FVector(4.5f, 4.5f, 2.2f);
    FVector ScaleTank234 = FVector(4.2f, 4.2f, 2.2f);
    FVector ScaleTank5 = FVector(3.5f, 3.5f, 2.2f);

    ScaleTankArray.Add(ScaleTank1);
    ScaleTankArray.Add(ScaleTank234);
    ScaleTankArray.Add(ScaleTank234);
    ScaleTankArray.Add(ScaleTank234);
    ScaleTankArray.Add(ScaleTank5);

    FVector FluidSize1 = FVector(39.0f, 39.0f, 0.5f);
    FVector FluidSize234 = FVector(36.0f, 36.0f, 0.5f);
    FVector FluidSize5 = FVector(32.0f, 32.0f, 0.5f);

    ScaleFluidArray.Add(FluidSize1);
    ScaleFluidArray.Add(FluidSize234);
    ScaleFluidArray.Add(FluidSize234);
    ScaleFluidArray.Add(FluidSize234);
    ScaleFluidArray.Add(FluidSize5);

    ATank* SpawnedTank;
    AFluid* SpawnedFluid;
    ARooftop* SpawnedRoof;

    NumberOfTanks = FMath::Clamp(NumberOfTanks, 0, 5);

    FVector RoofSpawnPosition;
    speed = 2.0f;

    for (int i = 0; i < NumberOfTanks; i++)
    {
        SpawnedTank = Cast<ATank>(GetWorld()->SpawnActor<ATank>(TankClass, PositionArray[i], Rotation));
        SpawnedTank->SetActorScale3D(ScaleTankArray[i]);
        TankArray.Add(SpawnedTank);

        SpawnedFluid = Cast<AFluid>(GetWorld()->SpawnActor<AFluid>(FluidClass, PositionArrayFluid[i], Rotation));
        SpawnedFluid->SetActorScale3D(ScaleFluidArray[i]);
        FluidArray.Add(SpawnedFluid);
        SpawnedFluid->SetOilRefinery(this);
        SpawnedFluid->SetMovementSpeed(speed);

        SpawnedRoof = Cast<ARooftop>(GetWorld()->SpawnActor<ARooftop>(RooftopClass, PositionArrayRoof[i], RotationArray[i]));
        SpawnedRoof->SetActorScale3D(ScaleTankArray[i]);
        RoofArray.Add(SpawnedRoof);
        SpawnedRoof->FluidReference = SpawnedFluid;
        SpawnedRoof->SetScaleRoof(ScaleTankArray[i].X);
        SpawnedRoof->SetMovementSpeed(speed);
    }
    MoveFluid();

    LaunchPythonDroneScript();
    CreateDroneHUD();

    GetWorld()->GetTimerManager().SetTimer(CesiumCameraTimer, this, &AOilRefinery::setCesiumCamera, 2.0f, false);  
}

void AOilRefinery::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    // Stop the Python script (close PowerShell) when the simulation ends
    StopPythonDroneScript();
}

// Called every frame
void AOilRefinery::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if(UpdateCamera)
        UpdateCesiumCamera();

    UpdateDroneHUD();
}

void AOilRefinery::MoveFluid()
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

void AOilRefinery::SpawnFountainForFluid(AFluid* Fluid)
{
    int i = FluidArray.Find(Fluid);

    FRotator Rotation = FRotator(0.0f, 0.0f, 0.0f);

    GetWorld()->GetTimerManager().SetTimer(CesiumCameraTimer, this, &AOilRefinery::setCesiumCamera, 2.0f, false);

    AFountain* SpawnedFountain = Cast<AFountain>(GetWorld()->SpawnActor<AFountain>(FountainClass, PositionArrayFountain[i], Rotation));
    
    FountainArray[i] = SpawnedFountain;
    
    Fluid->SetStopMoving(true);
}


void AOilRefinery::LaunchPythonDroneScript()
{
    // Python exe path
    FString PythonExe = TEXT("C:\\Users\\Andrea A\\AppData\\Local\\Programs\\Python\\Python37-32\\python.exe");
    FString ScriptPath = TEXT("C:\\Users\\Andrea A\\Unreal Projects\\iplom\\PythonClient\\multirotor\\drone_iplom.py");

    // Full path to powershell.exe
    FString PowerShellExe = TEXT("C:\\Windows\\System32\\WindowsPowerShell\\v1.0\\powershell.exe");

    // PowerShell command to run the Python script
    FString PowerShellCommand = FString::Printf(TEXT("-NoExit -Command \"& '%s' '%s'\""), *PythonExe, *ScriptPath);

    // Output the PowerShell command to debug
    // UE_LOG(LogTemp, Warning, TEXT("PowerShell Command: %s"), *PowerShellCommand);

    // Launch the PowerShell process
    PowerShellProcessHandle = FPlatformProcess::CreateProc(
        *PowerShellExe,          // Full path to PowerShell executable
        *PowerShellCommand,      // PowerShell command to run the script
        false,                   // bLaunchDetached (set to false to make the window visible)
        false,                   // bLaunchHidden (set to false to make the window visible)
        false,                   // bLaunchReallyHidden
        nullptr,                 // Out Process ID
        0,                       // Priority
        nullptr,                 // Optional working directory
        nullptr                  // Pipe handles
    );

    if (PowerShellProcessHandle.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("Python script launched successfully via PowerShell."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to launch Python script via PowerShell."));
    }
}

void AOilRefinery::StopPythonDroneScript()
{
    if (PowerShellProcessHandle.IsValid())
    {
        // Attempt to terminate the PowerShell process
        FPlatformProcess::TerminateProc(PowerShellProcessHandle);

        // Log that we attempted to terminate the process
        UE_LOG(LogTemp, Warning, TEXT("Terminating PowerShell process..."));
    }
}

void AOilRefinery::CreateDroneHUD()
{
    DroneHUD = CreateWidget<UDroneHUD>(GetWorld(), DroneHUDClass);
    DroneHUD->InitializeArrays();
    DroneHUD->AddToViewport();
}

void AOilRefinery::UpdateDroneHUD()
{
    FString PathToMeasurements = FPaths::ProjectContentDir();
    PathToMeasurements.Append("measurements.csv");
    TArray<FString> MeasurementsArray;
    FFileHelper::LoadFileToStringArray(MeasurementsArray, *PathToMeasurements);

    FString CurrentInclination;
    FString CurrentStatus;


    for (int i = 0; i < MeasurementsArray.Num(); i++)
    {
        MeasurementsArray[i].Split(TEXT(","), &CurrentInclination, &CurrentStatus);
        DroneHUD->SetInclination(CurrentInclination, i);

        if (CurrentStatus.Contains(TEXT("Detected")))
        {
            FLinearColor SelectedHUDColor = DroneHUD->GetColor(i).GetSpecifiedColor();
            if (!SelectedHUDColor.Equals(FLinearColor::Red))
            {
                DroneHUD->SetStatusColor(FVector(1, 0, 0), i);
                PlayAlarmSound();
            }
        }
        else if(CurrentStatus.Contains(TEXT("Safe")))
        {
            DroneHUD->SetStatusColor(FVector(0, 1, 0), i);
        }
        else if (CurrentStatus.Contains(TEXT("Warning")))
        {
            DroneHUD->SetStatusColor(FVector(1, 1, 0), i);
        }
        else
        {
            DroneHUD->SetStatusColor(FVector(1, 1, 1), i);
        }

        DroneHUD->SetStatus(CurrentStatus, i);

    }
}

void AOilRefinery::PlayAlarmSound()
{
    if (CurrentSound == nullptr || !CurrentSound->IsPlaying())
        CurrentSound = UGameplayStatics::SpawnSound2D(GetWorld(), AlarmSound);

    GetWorld()->GetTimerManager().SetTimer(CesiumCameraTimer, this, &AOilRefinery::StopAlarmSound, AlarmDuration, false);
}

void AOilRefinery::StopAlarmSound()
{
    if (CurrentSound && CurrentSound->IsPlaying())
        CurrentSound->Stop();
}


int32 AOilRefinery::GetTankID(AFountain* Fountain)
{
    int32 i = FountainArray.Find(Fountain);
    return i;
}

void AOilRefinery::SetDrone(APawn* DronePtr)
{
    AFlyingPawn* FlyingDrone = Cast<AFlyingPawn>(DronePtr);
    Drone = FlyingDrone;
}

void AOilRefinery::setCesiumCamera()
{
    DroneBottomCamera = Drone->getBottomCenterCamera();
    DroneBottomCameraComponent = DroneBottomCamera->FindComponentByClass<UCameraComponent>();

    FVector Location = DroneBottomCameraComponent->GetComponentLocation();
    FRotator Rotation = DroneBottomCameraComponent->GetComponentRotation();
    float FOV = DroneBottomCameraComponent->FieldOfView;

    CesiumCamera.Location = Location;
    CesiumCamera.Rotation = Rotation;
    CesiumCamera.FieldOfViewDegrees = FOV;

    CesiumCameraManager = ACesiumCameraManager::GetDefaultCameraManager(GetWorld());
    CameraID = CesiumCameraManager->AddCamera(CesiumCamera);

    UpdateCamera = true;   
}

void AOilRefinery::UpdateCesiumCamera()
{
    FVector Location = DroneBottomCameraComponent->GetComponentLocation();
    FRotator Rotation = DroneBottomCameraComponent->GetComponentRotation();
    float FOV = DroneBottomCameraComponent->FieldOfView;

    CesiumCamera.Location = Location;
    CesiumCamera.Rotation = Rotation;
    CesiumCamera.FieldOfViewDegrees = FOV;

    CesiumCameraManager->UpdateCamera(CameraID, CesiumCamera);
}





