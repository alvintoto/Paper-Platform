// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "EnemyAI.generated.h"

class UPawnSensingComponent;

/**
 * 
 */
UCLASS()
class MYPROJECT_API AEnemyAI : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	// Sets default values for this pawn's properties
	AEnemyAI();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UPawnSensingComponent* PawnSensingComp;

	UFUNCTION()
	void OnPawnSeen(APawn* SeenPawn);

	UPROPERTY(EditInstanceOnly, Category = "AI")
	bool bPatrol;

	UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "bPatrol"))
	AActor* FirstPatrolPoint;

	UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "bPatrol"))
	AActor* SecondPatrolPoint;

	AActor* CurrentPatrolPoint;

	void MoveToNextPatrolPoint();

	void UpdateCharacter();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
	
