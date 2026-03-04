// Fill out your copyright notice in the Description page of Project Settings.


#include "Snowball.h"

// Sets default values
ASnowball::ASnowball()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	SetReplicateMovement(true);

	CollisionComponent = CreateDefaultSubobject<USphereComponent>
		(TEXT("SphereComponent"));
	CollisionComponent->InitSphereRadius(15.0f);
	CollisionComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	RootComponent = CollisionComponent;

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>
		(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	ProjectileMovementComponent->InitialSpeed = 1500.0f;
	ProjectileMovementComponent->MaxSpeed = 1500.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->ProjectileGravityScale = 1.0f;
	
	ProjectileMovementComponent->bInterpMovement = true;


}

// Called when the game starts or when spawned
void ASnowball::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASnowball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

