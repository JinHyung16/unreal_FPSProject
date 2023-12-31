// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Engine/Classes/Components/SphereComponent.h>
#include <Engine/Classes/GameFramework/ProjectileMovementComponent.h>
#include "FPSProjectile.generated.h"

UCLASS()
class FPS_GAME_API AFPSProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//발사체 충돌 처리하기
	UPROPERTY(VisibleDefaultsOnly, Category = "Projectile")
		USphereComponent* CollisionComponent;

	//발사체 움직임 처리하기
	UPROPERTY(VisibleAnywhere, Category = "Projectile")
		UProjectileMovementComponent* ProjectileMovementComponent;

	void FireInDirection(const FVector& ShootDirection);
};
