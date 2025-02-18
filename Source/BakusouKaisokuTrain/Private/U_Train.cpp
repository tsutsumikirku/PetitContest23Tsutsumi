// Fill out your copyright notice in the Description page of Project Settings.


#include "U_Train.h"

// Sets default values
AU_Train::AU_Train()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AU_Train::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AU_Train::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AU_Train::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

