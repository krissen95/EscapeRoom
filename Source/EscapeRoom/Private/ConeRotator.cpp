// Fill out your copyright notice in the Description page of Project Settings.

#include "ConeRotator.h"


// Sets default values for this component's properties
UConeRotator::UConeRotator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UConeRotator::BeginPlay()
{
	Super::BeginPlay();


	//Find the owning Actor
	AActor* Owner = GetOwner();
	//Create a rotator YZX
	FRotator NewRotation = FRotator(30.0f, 60.0f, 90.0f);
	//Set door rotation
	Owner->SetActorRotation(NewRotation);
	
	
}


// Called every frame
void UConeRotator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

