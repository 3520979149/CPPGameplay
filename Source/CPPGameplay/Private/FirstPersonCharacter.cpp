// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"
#include"CustomMacros.h"//�Լ�д�ĺ꣨��ӡ��־��
#include"NiagaraComponent.h"
#include"NiagaraSystem.h"
#include"NiagaraFunctionLibrary.h"
#include"Engine/StreamableManager.h"
#include"Kismet/GameplayStatics.h"
#include"GameCube.h"

// Sets default values
AFirstPersonCharacter::AFirstPersonCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();

	//	ͬ������������Ч�����ش��ļ��Ῠס����������������Ӱ���û����顣
	//	ShootFX=LoadObject<UNiagaraSystem>(this, TEXT("NiagaraSystem'/Game/FirstPersonBP/FX/NS_GunBeam.NS_GunBeam'"));
	FStreamableManager LoadManager;//��������


	//�첽�����ʲ����ص�������RequestAsyncLoad�������첽���� ToSoftObjectPath��ת�������·��
	Handle = LoadManager.RequestAsyncLoad(ShootFXSP.ToSoftObjectPath(),
		[=]() {
			//�������֮��ֵ���ʲ����� GetLoadedAsset����ȡ�����ʲ�
			ShootFX = Cast<UNiagaraSystem>(Handle->GetLoadedAsset());
		}).Get();
		

}

// Called every frame
void AFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//��һ�������ϵ�key��EKeys�ṹ���б����������Ӧ��keyֵ��EInputEventö������key�ļ���״̬�����£�̧��ȣ���
	PlayerInputComponent->BindKey(EKeys::LeftMouseButton, EInputEvent::IE_Pressed, this, &AFirstPersonCharacter::Shoot);
	//���key�����dll�����Ҳ������ţ�һ����ȱ��һ�����صĿ⣬��CPPGameplay.Build.cs�м��ϾͿ����ˡ�

}

void AFirstPersonCharacter::Shoot()
{
	//	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Shoot"));
	//	PRINT(TEXT("Shoot"))//��־��ӡ���Լ�д�ģ�
	
	PlayShootMontage();
	//�õ���������cast����ҿ�����
	auto PC = Cast<APlayerController>(GetController());
	int SizeX, SizeY;
	PC->GetViewportSize(SizeX, SizeY);
	FVector WorldLocation, WorldDirection;
	//����Ļλ��Ͷ�䵽����
	PC->DeprojectScreenPositionToWorld(SizeX * 0.5f, SizeY * 0.5, WorldLocation, WorldDirection);
	FHitResult OutHit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);//�������Լ�
	//���߼��
	GetWorld()->LineTraceSingleByChannel(OutHit, WorldLocation, WorldLocation + WorldDirection * 10000.f, ShootTraceChannel,
		Params);

	auto BeamEnd = OutHit.TraceEnd;
	//�ж��Ƿ�����ײ
	if (OutHit.bBlockingHit)
	{	//������ײ���ı��յ�λ�ã���֮Ϊ�����󳤶�
		BeamEnd = OutHit.Location;
		//ͨ�������˺�ϵͳ���ﵽ�¼��ɷ���Ч����ʵ�ֻ����ɫ��
		UGameplayStatics::ApplyDamage(OutHit.GetActor(), 1.f, GetController(), this, 0);
	}

	if (IsValid(ShootFX))
	{
		//��ǹ�Ĳ��������Niagara�ʲ�������Ϊ��������ת
		auto Niagara = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ShootFX,
			GetMuzzleLocation(), GetControlRotation());
		//����Niagara�ʲ��Ľ���λ��Ϊ��ײ������λ�ã���Niagara�ʲ��е�һ���ֶθ�ֵ���Լ����壬ͨ����ʶ���󶨣���
		Niagara->SetVectorParameter("EndPoint", BeamEnd);
	}


}

