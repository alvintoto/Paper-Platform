// Fill out your copyright notice in the Description page of Project Settings.

#include "OverworldCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "PaperFlipbookComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AOverworldCharacter::AOverworldCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->bAbsoluteRotation = true;
	SpringArmComponent->SetupAttachment(RootComponent);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->bUsePawnControlRotation = false;
	CameraComponent->bAutoActivate = true;
	CameraComponent->SetupAttachment(SpringArmComponent);
}

// Called when the game starts or when spawned
void AOverworldCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AOverworldCharacter::MoveForward(float Value)
{
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
}

void AOverworldCharacter::MoveRight(float Value)
{
	AddMovementInput(FVector(0.0f, 1.0f, 0.0f), Value);
}

void AOverworldCharacter::UpdateAnimation()
{
	const FVector PlayerVelocity = GetVelocity();
	const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();

	UPaperFlipbook* DesiredAnimation = (PlayerSpeedSqr > 0.0f) ? Walk : Idle;
	if (GetSprite()->GetFlipbook() != DesiredAnimation)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}
}

void AOverworldCharacter::UpdateCharacter()
{
	UpdateAnimation();

	const FVector PlayerVelocity = GetVelocity();
	float TravelDirection = PlayerVelocity.Y;
	
	if (Controller != nullptr)
	{
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0, 180.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}
}

// Called every frame
void AOverworldCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateCharacter();
}

// Called to bind functionality to input
void AOverworldCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AOverworldCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AOverworldCharacter::MoveRight);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
}


