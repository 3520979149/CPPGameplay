// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FirstPersonCharacter.generated.h"

class UNiagaraSystem;

UCLASS()
class CPPGAMEPLAY_API AFirstPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFirstPersonCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)//��ʾ����ͼ�п��Ա�ʵ��
		/// <summary>
		/// ����ͼ��ʵ�ֶ��壬�������montage������
		/// </summary>
		void PlayShootMontage();

	UFUNCTION(BlueprintImplementableEvent)//��ʾ����ͼ�п��Ա�ʵ��
		/// <summary>
		/// ����ͼ��ʵ�ֶ��壬�õ���������ǹ�ڲ�۵�λ��
		/// </summary>
		/// <returns>����һ��λ��</returns>
		FVector GetMuzzleLocation();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input Character������������Զ����ɣ�
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	

private:
	/// <summary>
	///��ɫ����ĺ���	
	/// </summary>
	void Shoot();
	/// <summary>
	/// Niagara�ʲ�ָ��
	/// </summary>
	UNiagaraSystem* ShootFX;
	/// <summary>
	/// ������ָ��
	/// </summary>
	struct FStreamableHandle* Handle;

	
	UPROPERTY(EditAnywhere)
		/// <summary>
		/// ��ײ���ͨ��
		/// </summary>
		TEnumAsByte<ECollisionChannel> ShootTraceChannel;

	UPROPERTY(EditAnywhere)
		/// <summary>
		/// ģ�����������
		/// </summary>
		TSoftObjectPtr<UNiagaraSystem> ShootFXSP;
};
