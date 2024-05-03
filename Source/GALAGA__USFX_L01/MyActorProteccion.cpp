// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorProteccion.h"

// Sets default values
AMyActorProteccion::AMyActorProteccion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//malla para la proteccion de la nave nodriza
	mallaProteccion = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMehs"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/SM_Rock.SM_Rock'"));
	mallaProteccion->SetStaticMesh(ShipMesh.Object);
	//mallaProteccion->SetupAttachment(RootComponent);
	RootComponent = mallaProteccion;

}

// Called when the game starts or when spawned
void AMyActorProteccion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorProteccion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

