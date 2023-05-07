// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPrint.h"

// Sets default values
ATestPrint::ATestPrint()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestPrint::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Hello, World!"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Hello, World!"), true, FVector2D(5));
}

// Called every frame
void ATestPrint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

