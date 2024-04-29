// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaTransporte.h"

ANaveEnemigaTransporte::ANaveEnemigaTransporte()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}
void ANaveEnemigaTransporte::Mover(float DeltaTime)
{

	static FVector PosicionActual = GetActorLocation();

	static float TopeAbajo = PosicionActual.X - 1300.0f;
	static float Reaparicion = PosicionActual.X + 200.0f;
	static float MovimientoY = 0.0f;

	//FVector Desplazamiento = FVector(-100.0f * DeltaTime, MovimientoY * DeltaTime, 0.0f);

	//FVector Desplazamiento = FVector(-100.0f * DeltaTime, MovimientoY * DeltaTime, FMath::RandRange(-500.0f, 500.0f) * DeltaTime);

	/*FVector ReaparicionPocision = GetActorLocation() + Desplazamiento;
	if (ReaparicionPocision.X < TopeAbajo)
	{
		ReaparicionPocision.X = Reaparicion;
	}
	SetActorLocation(ReaparicionPocision);*/
}

void ANaveEnemigaTransporte::Disparar()
{

}
void ANaveEnemigaTransporte::Destruirse()
{

}

void ANaveEnemigaTransporte::Escapar()
{

}
void ANaveEnemigaTransporte::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}