//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "BombaComponente.h"
//
//// Sets default values for this component's properties
//UBombaComponente::UBombaComponente()
//{
//	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
//	// off to improve performance if you don't need them.
//	PrimaryComponentTick.bCanEverTick = true;
//
//    //// Configura la malla de la bomba
//    //static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBombaAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
//    //if (MallaBombaAsset.Succeeded())
//    //{
//    //    MallaBomba = MallaBombaAsset.Object;
//    //}
//    //else
//    //{
//    //    // Manejar el caso en el que la carga de la malla de bomba falla
//    //    // Por ejemplo, establecer MallaBomba como nullptr o asignar una malla de respaldo
//    //    MallaBomba = nullptr;
//    //}
//
//    //// Establece un tiempo entre el lanzamiento de bombas (por ejemplo, cada 5 segundos)
//    //TiempoEntreBombas = 5.0f;
//}
//
//
////// Called when the game starts
////void UBombaComponente::BeginPlay()
////{
////    Super::BeginPlay();
////
////    //// Comienza a generar bombas repetidamente
////    //GetWorld()->GetTimerManager().SetTimer(TimerHandle_GenerarBomba, this, &UBombaComponente::GenerarBomba, TiempoEntreBombas, true);
////
////}
//
////void UBombaComponente::LanzarBomba()
////{
////    //// Verifica si tenemos una clase de bomba y una malla válidas
////    //if (BombaClass && MallaBomba)
////    //{
////    //    // Obtiene la posición y rotación del propietario del componente
////    //    FVector PosicionPropietario = GetOwner()->GetActorLocation();
////    //    FRotator RotacionPropietario = GetOwner()->GetActorRotation();
////
////    //    // Spawnea la bomba en la posición del propietario
////    //    AActor* Bomba = GetWorld()->SpawnActor<AActor>(BombaClass, PosicionPropietario, RotacionPropietario);
////    //    if (Bomba)
////    //    {
////    //        // Crea y adjunta un componente de malla estática a la bomba
////    //        UStaticMeshComponent* BombaMeshComponent = NewObject<UStaticMeshComponent>(Bomba, TEXT("BombaMesh"));
////    //        if (BombaMeshComponent)
////    //        {
////    //            BombaMeshComponent->SetStaticMesh(MallaBomba);
////    //            BombaMeshComponent->AttachToComponent(Bomba->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
////    //        }
////
////    //        // Aplica una fuerza inicial a la bomba para lanzarla
////    //        FVector DireccionLanzamiento = RotacionPropietario.Vector(); // Dirección del lanzamiento
////    //        FVector Impulso = DireccionLanzamiento * FuerzaDeLanzamiento; // Cálculo del impulso
////    //        Bomba->FindComponentByClass<UPrimitiveComponent>()->AddImpulse(Impulso); // Aplicación del impulso
////    //    }
////    //}
////}
//
//
////void UBombaComponente::GenerarBomba()
////{
////    //// Spawnea la bomba utilizando la clase de bomba proporcionada
////    //UWorld* World = GetWorld();
////    //if (World && BombaClass && MallaBomba)
////    //{
////    //    FVector PosicionBomba = GetOwner()->GetActorLocation(); // Obtén la posición del actor al que está adjunto este componente
////    //    FRotator RotacionBomba = GetOwner()->GetActorRotation(); // Obtén la rotación del actor al que está adjunto este componente
////
////    //    // Spawnea la bomba y establece la malla visual
////    //    AActor* Bomba = World->SpawnActor<AActor>(BombaClass, PosicionBomba, RotacionBomba);
////    //    if (Bomba)
////    //    {
////    //        UStaticMeshComponent* BombaMeshComponent = NewObject<UStaticMeshComponent>(Bomba, TEXT("BombaMesh"));
////    //        if (BombaMeshComponent)
////    //        {
////    //            BombaMeshComponent->SetStaticMesh(MallaBomba);
////    //            BombaMeshComponent->AttachToComponent(Bomba->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
////    //        }
////    //    }
////    //}
////}
//
//// Called every frame
//void UBombaComponente::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
//{
//	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//
//}
//
