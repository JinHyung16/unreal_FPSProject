// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <Engine/Classes/Camera/CameraComponent.h>
#include "FPSProjectile.h"
#include "FPSCharacter.generated.h"

UCLASS()
class FPS_GAME_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Move to forward and behind function
	UFUNCTION()
		void MoveForward(float AxisValue);

	//Move to right and left function
	UFUNCTION()
		void MoveRight(float AxisValue);

	//Jump Start
	UFUNCTION()
		void JumpStart();

	//Jump Stop
	UFUNCTION()
		void JumpStop();

	//Fire Function in FPSProjectile.cpp and FPSProjectile.h
	UFUNCTION()
		void Fire();

	//발자체 스폰 위치 결정
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GamePlay")
		FVector MuzzleOffset;

	//Fire 함수 호출시 발사체 스폰
	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
		TSubclassOf<AFPSProjectile> ProjectileClass;

	UPROPERTY(VisibleAnywhere)
		UCameraComponent* FPSCameraComponent;

	//1인칭 스켈레톤 매쉬를 위한 선언
	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
		USkeletalMeshComponent* FPSMesh;

};
