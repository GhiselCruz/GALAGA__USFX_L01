// Fill out your copyright notice in the Description page of Project Settings.


#include "InfernoNodriza.h"
#include "NodrizaActorBuilder.h"
#include "MyActorArmas.h"
#include "MyActorProteccion.h"
#include "MyActorApariencia.h"

// Sets default values
AInfernoNodriza::AInfernoNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Movimiento = 500.0f; //Velocidad de movimiento de la nave
}

// Called when the game starts or when spawned
void AInfernoNodriza::BeginPlay()
{
	Super::BeginPlay();
	nave = GetWorld()->SpawnActor<ANodrizaActorBuilder>();
}

// Called every frame
void AInfernoNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInfernoNodriza::builArmamento()
{
	FVector UbicacionArma = FVector(-350.0f, 10.0f, 150.0f);
	FRotator RotacionArma = FRotator(0.0f, 0.0f, 0.0f);
	AMyActorArmas* arma = GetWorld()->SpawnActor<AMyActorArmas>(UbicacionArma, RotacionArma);
}

void AInfernoNodriza::builProteccion()
{
	FVector UbicacionProteccion = FVector(-250.0f, 0.0f, 150.0f);
	FRotator RotacionProteccion = FRotator(0.0f, 0.0f, 0.0f);
	AMyActorProteccion* proteccion = GetWorld()->SpawnActor<AMyActorProteccion>(UbicacionProteccion, RotacionProteccion);
}

void AInfernoNodriza::builApariencia()
{
	FVector UbicacionApariencia = FVector(70.0f, 0.0f, 150.0f);
	FRotator RotacionApariencia = FRotator(0.0f, 180.0f, 0.0f);
	AMyActorApariencia* apariencia = GetWorld()->SpawnActor<AMyActorApariencia>(UbicacionApariencia, RotacionApariencia);
}

void AInfernoNodriza::builMovimiento()
{
	
}

ANodrizaActorBuilder* AInfernoNodriza::GetNodrizaActorBuilder()
{
	return nave;
}




