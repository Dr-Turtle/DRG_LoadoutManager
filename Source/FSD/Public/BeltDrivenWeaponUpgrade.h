#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "StandardItemUpgrade.h"
#include "EBeltDrivenWeaponUpgrade.h"
#include "BeltDrivenWeaponUpgrade.generated.h"

class AFSDPlayerState;
class AItem;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBeltDrivenWeaponUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBeltDrivenWeaponUpgrade upgradeType;
    
public:
    UBeltDrivenWeaponUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, EBeltDrivenWeaponUpgrade NewUpgradeType);
    
};

