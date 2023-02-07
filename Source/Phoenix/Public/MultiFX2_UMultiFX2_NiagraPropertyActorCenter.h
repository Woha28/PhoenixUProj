#pragma once
#include "CoreMinimal.h"
#include "ENiagraPropertyTarget.h"
#include "MultiFX2_NiagraPropertyBase.h"
#include "MultiFX2_UMultiFX2_NiagraPropertyActorCenter.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UMultiFX2_UMultiFX2_NiagraPropertyActorCenter : public UMultiFX2_NiagraPropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagraPropertyTarget TargetType;
    
    UMultiFX2_UMultiFX2_NiagraPropertyActorCenter();
};

