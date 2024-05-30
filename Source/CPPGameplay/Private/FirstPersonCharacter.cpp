// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"
#include"CustomMacros.h"//自己写的宏（打印日志）
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

	//	同步加载粒子特效，加载大文件会卡住，阻塞其他操作，影响用户体验。
	//	ShootFX=LoadObject<UNiagaraSystem>(this, TEXT("NiagaraSystem'/Game/FirstPersonBP/FX/NS_GunBeam.NS_GunBeam'"));
	FStreamableManager LoadManager;//流管理器


	//异步加载资产（回调函数）RequestAsyncLoad：请求异步加载 ToSoftObjectPath：转到软对象路径
	Handle = LoadManager.RequestAsyncLoad(ShootFXSP.ToSoftObjectPath(),
		[=]() {
			//加载完成之后赋值给资产变量 GetLoadedAsset：获取加载资产
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
	//绑定一个键盘上的key，EKeys结构体中保存了输入对应的key值，EInputEvent枚举中有key的几种状态（按下，抬起等）。
	PlayerInputComponent->BindKey(EKeys::LeftMouseButton, EInputEvent::IE_Pressed, this, &AFirstPersonCharacter::Shoot);
	//这个key会出现dll报错，找不到符号，一般是缺少一个加载的库，在CPPGameplay.Build.cs中加上就可以了。

}

void AFirstPersonCharacter::Shoot()
{
	//	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Shoot"));
	//	PRINT(TEXT("Shoot"))//日志打印（自己写的）
	
	PlayShootMontage();
	//得到控制器，cast成玩家控制器
	auto PC = Cast<APlayerController>(GetController());
	int SizeX, SizeY;
	PC->GetViewportSize(SizeX, SizeY);
	FVector WorldLocation, WorldDirection;
	//将屏幕位置投射到世界
	PC->DeprojectScreenPositionToWorld(SizeX * 0.5f, SizeY * 0.5, WorldLocation, WorldDirection);
	FHitResult OutHit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);//检测忽略自己
	//射线检测
	GetWorld()->LineTraceSingleByChannel(OutHit, WorldLocation, WorldLocation + WorldDirection * 10000.f, ShootTraceChannel,
		Params);

	auto BeamEnd = OutHit.TraceEnd;
	//判断是否发生碰撞
	if (OutHit.bBlockingHit)
	{	//发生碰撞，改变终点位置，反之为检测最大长度
		BeamEnd = OutHit.Location;
		//通过内置伤害系统，达到事件派发的效果，实现击打变色。
		UGameplayStatics::ApplyDamage(OutHit.GetActor(), 1.f, GetController(), this, 0);
	}

	if (IsValid(ShootFX))
	{
		//在枪的插槽上生成Niagara资产，方向为控制器旋转
		auto Niagara = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ShootFX,
			GetMuzzleLocation(), GetControlRotation());
		//设置Niagara资产的结束位置为碰撞发生的位置（给Niagara资产中的一个字段赋值（自己定义，通过标识符绑定））
		Niagara->SetVectorParameter("EndPoint", BeamEnd);
	}


}

