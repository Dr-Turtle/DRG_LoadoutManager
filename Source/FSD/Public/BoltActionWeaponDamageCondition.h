#pragma once
#include "CoreMinimal.h"
#include "EBoltActionWeaponConditions.h"
#include "DamageCondition.h"
#include "BoltActionWeaponDamageCondition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBoltActionWeaponDamageCondition : public UDamageCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBoltActionWeaponConditions WeaponCondition;
    
public:
    UBoltActionWeaponDamageCondition();
};

