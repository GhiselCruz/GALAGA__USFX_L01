// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorComponentMovimiento.h"

// Sets default values for this component's properties
UMyActorComponentMovimiento::UMyActorComponentMovimiento()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	Movimiento = 500;
	movimiento = 500;
	MovimientoDerecha = true;
	MovimientoIzquierda = true;
}


// Called when the game starts
void UMyActorComponentMovimiento::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyActorComponentMovimiento::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	AActor* Parent = GetOwner();

    if (Parent)
	{
		if (Parent->GetActorLocation().Y > 0)
		{
			//nueva posicion
			auto NuevaPosicion = Parent->GetActorLocation() + FVector(MovimientoDerecha ? movimiento : -movimiento, MovimientoIzquierda ? Movimiento : -Movimiento, 0.0f) * DeltaTime;
			//auto NuevaPosicion = Parent->GetActorLocation() + FVector(MovimientoDerecha ? Movimiento : -Movimiento, MovimientoIzquierda ? Movimiento : -Movimiento, 0.0f);
			Parent->SetActorLocation(NuevaPosicion);


			if (MovimientoDerecha && GetOwner()->GetActorLocation().X >= 1000.0f)
			{
				MovimientoDerecha = false;
			}
			else if (!MovimientoDerecha && GetOwner()->GetActorLocation().X <= 500.0f)
			{
				MovimientoDerecha = true;
			}

			if (MovimientoIzquierda && GetOwner()->GetActorLocation().Y >= 1700.0f)
			{
				MovimientoIzquierda = false;
			}
			else if (!MovimientoIzquierda && GetOwner()->GetActorLocation().Y <= 200.0f)
			{
				MovimientoIzquierda = true;
			}
			Parent->SetActorLocation(NuevaPosicion);
		}
		else if (Parent->GetActorLocation().Y < 0)
		{
			//nueva posicion
			auto NuevaPosicion2 = Parent->GetActorLocation() + FVector(MovimientoDerecha ? movimiento : -movimiento, MovimientoIzquierda ? -Movimiento : Movimiento, 0.0f) * DeltaTime;
			//auto NuevaPosicion = Parent->GetActorLocation() + FVector(MovimientoDerecha ? Movimiento : -Movimiento, MovimientoIzquierda ? Movimiento : -Movimiento, 0.0f);
			Parent->SetActorLocation(NuevaPosicion2);


			if (MovimientoDerecha && GetOwner()->GetActorLocation().X >= 1000.0f)
			{
				MovimientoDerecha = false;
			}
			else if (!MovimientoDerecha && GetOwner()->GetActorLocation().X <= 500.0f)
			{
				MovimientoDerecha = true;
			}

			if (MovimientoIzquierda && GetOwner()->GetActorLocation().Y <= -1700.0f)
			{
				MovimientoIzquierda = false;
			}
			else if (!MovimientoIzquierda && GetOwner()->GetActorLocation().Y >= -200.0f)
			{
				MovimientoIzquierda = true;
			}
			Parent->SetActorLocation(NuevaPosicion2);
		}
	}
}





	/*else if (Parent<0)
	{
		auto NuevaPosicion2 = Parent->GetActorLocation() + FVector(MovimientoDerecha ? Movimiento : -Movimiento, MovimientoIzquierda ? Movimiento : -Movimiento, 0.0f);
		Parent->SetActorLocation(NuevaPosicion2);

			if (MovimientoDerecha && GetOwner()->GetActorLocation().X >= 1000.0f)
			{
				MovimientoDerecha = false;
			}
			else if (!MovimientoDerecha && GetOwner()->GetActorLocation().X <= 500.0f)
			{
				MovimientoDerecha = true;
			}

			if (MovimientoIzquierda && GetOwner()->GetActorLocation().Y >= -1700.0f)
			{
				MovimientoIzquierda = false;
			}
			else if (!MovimientoIzquierda && GetOwner()->GetActorLocation().Y <= -100.0f)
			{
				MovimientoIzquierda = true;
			}
	}*/
	

