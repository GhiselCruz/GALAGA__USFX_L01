// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorArmas.h"

// Sets default values
AMyActorArmas::AMyActorArmas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//malla para el arma 
	mallaArmas = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/BulletLevel2.BulletLevel2'"));
	mallaArmas->SetStaticMesh(ShipMesh.Object);
	//mallaArmas->SetupAttachment(RootComponent);
	RootComponent = mallaArmas;
	SetActorScale3D(FVector(5.0f, 5.0f, 5.0f));
}

// Called when the game starts or when spawned
void AMyActorArmas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorArmas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


