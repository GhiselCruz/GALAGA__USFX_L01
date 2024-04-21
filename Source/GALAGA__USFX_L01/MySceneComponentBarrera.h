// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MySceneComponentBarrera.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA__USFX_L01_API UMySceneComponentBarrera : public USceneComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	UMySceneComponentBarrera();

	UFUNCTION(BlueprintCallable, Category = "Barrera")
	void CrearBarrera();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor>BarreraToSpawn;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
