// Fill out your copyright notice in the Description page of Project Settings.

#include "EnemyAI.h"
#include "Perception/PawnSensingComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AI/Navigation/NavigationSystem.h"
#include "GameFramework/Character.h"
#include "AI/Navigation/NavigationPath.h"
#include "DrawDebugHelpers.h"

// Sets default values
AEnemyAI::AEnemyAI()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));

	PawnSensingComp->OnSeePawn.AddDynamic(this, &AEnemyAI::OnPawnSeen);
}

// Called when the game starts or when spawned
void AEnemyAI::BeginPlay()
{
	Super::BeginPlay();

	if (bPatrol)
	{
		MoveToNextPatrolPoint();
	}
}

void AEnemyAI::OnPawnSeen(APawn* SeenPawn)
{

}

void AEnemyAI::MoveToNextPatrolPoint()
{
	if (CurrentPatrolPoint == nullptr || CurrentPatrolPoint == SecondPatrolPoint)
	{
		CurrentPatrolPoint = FirstPatrolPoint;
	}
	else
	{
		CurrentPatrolPoint = SecondPatrolPoint;
	}

	UNavigationSystem::SimpleMoveToActor(GetController(), CurrentPatrolPoint);
}

void AEnemyAI::UpdateCharacter()
{
	const FVector AIVelocity = GetVelocity();
	float TravelDirection = AIVelocity.Y;

	if (Controller != nullptr)
	{
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0, 0.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}
}

// Called every frame
void AEnemyAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (CurrentPatrolPoint)
	{
		FVector Delta = GetActorLocation() - CurrentPatrolPoint->GetActorLocation();
		float DistanceToGoal = Delta.Size();

		// Check if we are within 50 units of our goal, if so - pick a new patrol point
		if (DistanceToGoal < 500)
		{
			MoveToNextPatrolPoint();
		}
	}
}


