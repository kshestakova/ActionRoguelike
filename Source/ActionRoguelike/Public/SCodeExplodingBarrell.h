// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCodeExplodingBarrell.generated.h"

class UStaticMeshComponent;
class URadialForceComponent;


UCLASS()
class ACTIONROGUELIKE_API ASCodeExplodingBarrell : public AActor
{
	GENERATED_BODY()

public:
	ASCodeExplodingBarrell();

protected:

	UPROPERTY(VisibleAnywhere)
		TObjectPtr<UStaticMeshComponent> MeshComp;

	UPROPERTY(VisibleAnywhere)
		TObjectPtr<URadialForceComponent> ForceComp;

	virtual void PostInitializeComponents() override;

	UFUNCTION()
		void OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

};
