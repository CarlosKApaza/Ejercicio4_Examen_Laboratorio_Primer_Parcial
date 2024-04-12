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
										// set = modificar
	if (world != nullptr)
	{
		// crear 5 naves enemigas
		for (int i = 0; i < 7; i++)
		{
			ANaveEnemiga* naveEnemiga = world->SpawnActor<ANaveEnemiga>(ubicacionNaveActual, rotacionNave);
			TNavesEnemigas.Add(naveEnemiga);
			//ubicacionNaveActual.X += 200.0f;
			ubicacionNaveActual.Y += 200.0f;
		}

	}

	//// Establece la frecuencia de lanzamiento de bombas aleatorias en 5 segundos
	GetWorldTimerManager().SetTimer(BombasAleatorias, this, &AExamenLABGameMode::LanzarBombasAleatorias, 2.0f, true);
}


void AExamenLABGameMode::LanzarBombasAleatorias()
{
	UWorld* const World = GetWorld();
	if (World != nullptr && TNavesEnemigas.Num() > 0)
	{
		// Obtener una nave enemiga aleatoria
		int32 Index = FMath::RandRange(0, TNavesEnemigas.Num() - 1);
		ANaveEnemiga* NaveEnemiga = TNavesEnemigas[Index];

		// Verificar si la nave enemiga es válida
		if (NaveEnemiga != nullptr)
		{
			// Obtener la posición de la nave enemiga
			FVector PosicionNave = NaveEnemiga->GetActorLocation();

			// Definir la cantidad aleatoria de bombas a lanzar
			int32 CantidadBombas = FMath::RandRange(1, 7); // Puedes ajustar el rango según tus necesidades

			// Bucle para crear y lanzar varias bombas
			for (int32 i = 0; i < CantidadBombas; ++i)
			{
				// Calcular una posición aleatoria en Y con un espacio de 200 unidades entre bombas
				float AleatorioY = PosicionNave.Y + FMath::RandRange(-900.0f, 900.0f); // Ajusta el rango según tus necesidades

				// Definir la posición de la bomba
				FVector PosicionBomba = FVector(PosicionNave.X, AleatorioY, PosicionNave.Z);

				// Rotación por defecto (puedes ajustarla según tus necesidades)
				FRotator RotacionBomba = FRotator::ZeroRotator;

				// Spawnear la bomba en la posición aleatoria calculada
				ABomba* Bomba = World->SpawnActor<ABomba>(PosicionBomba, RotacionBomba);
			}
		}
	}
}
