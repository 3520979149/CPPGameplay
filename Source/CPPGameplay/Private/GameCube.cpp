// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCube.h"
#include"Kismet/KismetMathLibrary.h"
#include"Kismet/KismetSystemLibrary.h"

// Sets default values
AGameCube::AGameCube()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//CreateDefaultSubobject��ģ�崴��Ĭ���Ӷ���<UStaticMeshComponent>��̬�����������������Ϊ�����
	CubeMesh = this->CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	SetRootComponent(CubeMesh);

	//FObjectFinder�������������ģ�壩 ͨ�����췽������·�������أ�ģ�����͵Ķ���
	ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshFinder(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	//Succeeded���ɹ� ������һ��boolֵ���ɹ������þ�̬����Ϊ���ҵ����ʲ�
	if (CubeMeshFinder.Succeeded()) CubeMesh->SetStaticMesh(CubeMeshFinder.Object);
	//ͬ������һ�����ʣ�Ȼ�������������Ϊ�ҵ��Ĳ���
	ConstructorHelpers::FObjectFinder<UMaterialInterface> CubeMatFinder(TEXT("Material'/Game/FirstPersonBP/Material/M_Color.M_Color'"));
	if (CubeMatFinder.Succeeded()) CubeMesh->SetMaterial(0, CubeMatFinder.Object);

}

// Called when the game starts or when spawned
void AGameCube::BeginPlay()
{
	Super::BeginPlay();
	//�������̬���񴴽���̬����ʵ��
	CubeMatDynamic = CubeMesh->CreateDynamicMaterialInstance(0);
	//�õ���ǰ������ӵĲ���ʵ����ɫ�����ظ�OriginColor
	CubeMatDynamic->GetVectorParameterValue(FHashedMaterialParameterInfo(TEXT("Color")), OriginColor);
	TargetColor = CurrentColor = OriginColor;
}

// Called every frame
void AGameCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//���Բ�ֵ�ı���ɫ
	CurrentColor = UKismetMathLibrary::CInterpTo(CurrentColor, TargetColor, DeltaTime, 8.f);
	//ÿ֡���ö�̬����ʵ������ɫ
	CubeMatDynamic->SetVectorParameterValue(TEXT("Color"), CurrentColor);
}

void AGameCube::SetColor(FLinearColor NewChangeColor, int Index)
{
	//������������ɫ���ĵ�Ҫ�ı����ɫ��
	ChangedColor = NewChangeColor;
	ColorIndex = Index;
}

void AGameCube::Eliminate()
{
	DisplayEliminateFX();
	//��������
	Destroy();
}

void AGameCube::Recover()
{
	//��ɫ��ԭ��ʱ��ʹ������Ա��ٴε��
	bBeenShot = false;
	//���ö�ʱ�����󶨶�ʱִ�еĺ���
	FTimerDynamicDelegate Delegate;
	Delegate.BindUFunction(this, TEXT("DelayRecover"));
	GetWorld()->GetTimerManager().SetTimer(DalayRecoverHandle, Delegate, .5f, false);

}

void AGameCube::DelayRecover()
{
	//��ɫ�ָ�
	TargetColor = OriginColor;
}

float AGameCube::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	auto Ret = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	//�Ѿ����һ�κ�Ͳ����ٵ����
	if (bBeenShot)return Ret;
	//��һ���ܵ��˺�����Ϊtrue����ֹ�ظ����
	bBeenShot = true;
	//ÿ�ܵ��˺��ͽ�����ɫ�л�
	TargetColor = ChangedColor;
	//�õ���ʱ������
	auto& Manager = GetWorld()->GetTimerManager();

	if (DalayRecoverHandle.IsValid() && Manager.GetTimerRemaining(DalayRecoverHandle) > 0.f)//�ж��Ƿ񣨶�ʱ�������Ч��ʣ��ʱ�����0����Ҫֹͣ��ʱ������ԭ��ɫ��
	{
		//ֹͣ��ʱ��
		Manager.ClearTimer(DalayRecoverHandle);
	}
	//����ί�У���ʼ�¼��ɷ���
	OnCubeBeenHit.Broadcast(this);

	return Ret;
}

