// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCazaG1.h"

ANaveEnemigaCazaG1::ANaveEnemigaCazaG1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//SetActorScale3D(FVector(2.0f, 2.0f, 2.0f));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaCazaG1::Mover()
{

}

void ANaveEnemigaCazaG1::Disparar()
{

}

void ANaveEnemigaCazaG1::Destruirse()
{

}

void ANaveEnemigaCazaG1::Escapar()
{

}