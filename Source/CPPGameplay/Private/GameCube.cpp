// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCube.h"
#include"Kismet/KismetMathLibrary.h"
#include"Kismet/KismetSystemLibrary.h"

// Sets default values
AGameCube::AGameCube()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//CreateDefaultSubobject：模板创建默认子对象（<UStaticMeshComponent>静态网格组件），并设置为根组件
	CubeMesh = this->CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	SetRootComponent(CubeMesh);

	//FObjectFinder：对象查找器（模板） 通过构造方法传入路径，返回（模板类型的对象）
	ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshFinder(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	//Succeeded：成功 ，返回一个bool值，成功就设置静态网格为查找到的资产
	if (CubeMeshFinder.Succeeded()) CubeMesh->SetStaticMesh(CubeMeshFinder.Object);
	//同理，查找一个材质，然后设置网格材质为找到的材质
	ConstructorHelpers::FObjectFinder<UMaterialInterface> CubeMatFinder(TEXT("Material'/Game/FirstPersonBP/Material/M_Color.M_Color'"));
	if (CubeMatFinder.Succeeded()) CubeMesh->SetMaterial(0, CubeMatFinder.Object);

}

// Called when the game starts or when spawned
void AGameCube::BeginPlay()
{
	Super::BeginPlay();
	//给这个静态网格创建动态材质实例
	CubeMatDynamic = CubeMesh->CreateDynamicMaterialInstance(0);
	//得到当前这个盒子的材质实例颜色，返回给OriginColor
	CubeMatDynamic->GetVectorParameterValue(FHashedMaterialParameterInfo(TEXT("Color")), OriginColor);
	TargetColor = CurrentColor = OriginColor;
}

// Called every frame
void AGameCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//线性插值改变颜色
	CurrentColor = UKismetMathLibrary::CInterpTo(CurrentColor, TargetColor, DeltaTime, 8.f);
	//每帧设置动态材质实例的颜色
	CubeMatDynamic->SetVectorParameterValue(TEXT("Color"), CurrentColor);
}

void AGameCube::SetColor(FLinearColor NewChangeColor, int Index)
{
	//将传过来的颜色更改到要改变的颜色上
	ChangedColor = NewChangeColor;
	ColorIndex = Index;
}

void AGameCube::Eliminate()
{
	DisplayEliminateFX();
	//消除方块
	Destroy();
}

void AGameCube::Recover()
{
	//颜色还原的时候，使方块可以被再次点击
	bBeenShot = false;
	//调用定时器，绑定定时执行的函数
	FTimerDynamicDelegate Delegate;
	Delegate.BindUFunction(this, TEXT("DelayRecover"));
	GetWorld()->GetTimerManager().SetTimer(DalayRecoverHandle, Delegate, .5f, false);

}

void AGameCube::DelayRecover()
{
	//颜色恢复
	TargetColor = OriginColor;
}

float AGameCube::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	auto Ret = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	//已经点过一次后就不能再点击了
	if (bBeenShot)return Ret;
	//第一次受到伤害设置为true，防止重复点击
	bBeenShot = true;
	//每受到伤害就进行颜色切换
	TargetColor = ChangedColor;
	//得到定时器引用
	auto& Manager = GetWorld()->GetTimerManager();

	if (DalayRecoverHandle.IsValid() && Manager.GetTimerRemaining(DalayRecoverHandle) > 0.f)//判断是否（定时器句柄有效和剩余时间大于0）需要停止定时器（还原颜色）
	{
		//停止定时器
		Manager.ClearTimer(DalayRecoverHandle);
	}
	//调用委托（开始事件派发）
	OnCubeBeenHit.Broadcast(this);

	return Ret;
}

