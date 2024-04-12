// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExamenLABGameMode.h"
#include "ExamenLABPawn.h"
#include "NaveEnemiga.h"
#include "Bomba.h"

AExamenLABGameMode::AExamenLABGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AExamenLABPawn::StaticClass();
}

void AExamenLABGameMode::BeginPlay()
{
	Super::BeginPlay();
	// set default pawn class to our character class
	DefaultPawnClass = AExamenLABPawn::StaticClass();

	// crear ubicaciones de la nave enemiga
	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	FVector ubicacionNaveInicial = FVector(-300.0f, 0.0f, 180.0f);
	FVector ubicacionNaveActual = ubicacionNaveInicial;

	UWorld* const world = GetWorld(); // get = entrar
										
	if (world != nullptr)
	{
		// crear 7 naves enemigas
		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* naveEnemiga = world->SpawnActor<ANaveEnemiga>(ubicacionNaveActual, rotacionNave); // spawnear la nave enemiga al mundo
			TNavesEnemigas.Add(naveEnemiga); // añadir la nave enemiga a la lista de naves enemigas
			//ubicacionNaveActual.X += 200.0f;
			ubicacionNaveActual.Y += 200.0f; // para que las naves tengan una separación en Y de 200 unidades
		}

	}

	//// Establecemos la frecuencia de lanzamiento de bombas aleatorias en 2 segundos
	GetWorldTimerManager().SetTimer(BombasAleatorias, this, &AExamenLABGameMode::LanzarBombasAleatorias, 2.0f, true);
}


void AExamenLABGameMode::LanzarBombasAleatorias()
{
	UWorld* const World = GetWorld();
	if (World != nullptr && TNavesEnemigas.Num() > 0)
	{
		// Obtenermos una nave enemiga aleatoria
		int32 Index = FMath::RandRange(0, TNavesEnemigas.Num() - 1); 
		ANaveEnemiga* NaveEnemiga = TNavesEnemigas[Index]; // Obtenemos la nave enemiga en la posición aleatoria

		// Verificamos si la nave enemiga es válida
		if (NaveEnemiga != nullptr)
		{
			// Obtener la posición de la nave enemiga
			FVector PosicionNave = NaveEnemiga->GetActorLocation();

			// Definir la cantidad aleatoria de bombas a lanzar
			int32 CantidadBombas = FMath::RandRange(1, 7); // Podemos ajustar el rango según nuestras necesidades

			// Bucle para crear y lanzar varias bombas
			for (int32 i = 0; i < CantidadBombas; ++i)
			{
				// Calculamos una posición aleatoria en Y con un espacio de 200 unidades entre bombas
				float AleatorioY = PosicionNave.Y + FMath::RandRange(-900.0f, 900.0f); // Se puede ajustar el rango segun nuestras necesidades

				// Definimos la posición de la bomba
				FVector PosicionBomba = FVector(PosicionNave.X, AleatorioY, PosicionNave.Z);

				// Rotación por defecto (podemos ajustarla según nuestras necesidades)
				FRotator RotacionBomba = FRotator::ZeroRotator;

				// Spawnear la bomba en la posición aleatoria calculada
				ABomba* Bomba = World->SpawnActor<ABomba>(PosicionBomba, RotacionBomba);
			}
		}
	}
}
