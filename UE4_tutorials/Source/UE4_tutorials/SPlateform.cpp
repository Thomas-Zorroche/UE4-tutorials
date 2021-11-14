// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlateform.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

#define AddDynamic( UserObject, FuncName ) __Internal_AddDynamic( UserObject, FuncName, STATIC_FUNCTION_FNAME( TEXT( #FuncName ) ) )

// Sets default values
ASPlateform::ASPlateform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("MeshComp");
	RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void ASPlateform::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ASPlateform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



