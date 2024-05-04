// Fill out your copyright notice in the Description page of Project Settings.


#include "NemesisNodriza.h"
#include "NodrizaActorBuilder.h"
#include "MyActorArmas.h"
#include "MyActorProteccion.h"
#include "MyActorApariencia.h"

// Sets default values
ANemesisNodriza::ANemesisNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANemesisNodriza::BeginPlay()
{
	Super::BeginPlay();
	
	nave2 = GetWorld()->SpawnActor<ANodrizaActorBuilder>();
}

// Called every frame
void ANemesisNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANemesisNodriza::builArmamento()
{
	//Nemesis no tendra el objeto Armas 
	 

	//FVector UbicacionArma = FVector(350.0f, 220.0f, 150.0f);
	//FRotator RotacionArma = FRotator(0.0f, 0.0f, 0.0f);
	//AMyActorArmas* arma = GetWorld()->SpawnActor<AMyActorArmas>(UbicacionArma, RotacionArma);
}

void ANemesisNodriza::builProteccion()
{
	FVector UbicacionProteccion = FVector(1200.0f, 190.0f, 150.0f);
	FRotator RotacionProteccion = FRotator(0.0f, 0.0f, 0.0f);
	AMyActorProteccion* proteccion = GetWorld()->SpawnActor<AMyActorProteccion>(UbicacionProteccion, RotacionProteccion);
}

void ANemesisNodriza::builApariencia()
{
	FVector UbicacionApariencia = FVector(1500.0f, 180.0f, 150.0f);
	FRotator RotacionApariencia = FRotator(0.0f, 180.0f, 0.0f);
	AMyActorApariencia* apariencia = GetWorld()->SpawnActor<AMyActorApariencia>(UbicacionApariencia, RotacionApariencia);
}

void ANemesisNodriza::builMovimiento()
{

}

ANodrizaActorBuilder* ANemesisNodriza::GetNodrizaActorBuilder()
{
	return nave2;
}