#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WindSourceComponentBase -FallbackName=WindSourceComponentBase
#include "WindDeflectorComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WIND_API UWindDeflectorComponent : public UWindSourceComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Outdoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SpeedMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionDistanceAlongDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullEffectAlongNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bBidirectional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bFlipNormal;
    
    UWindDeflectorComponent();
    UFUNCTION(BlueprintCallable)
    void SetTransitionDistanceAlongDirection(float InNewTransitionDistanceAlongDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetStrength(float InNewStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedMod(float InNewSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(float InNewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetOutdoors(float InNewOutdoors);
    
    UFUNCTION(BlueprintCallable)
    void SetFullEffectAlongNormal(float InNewFullEffectAlongNormal);
    
    UFUNCTION(BlueprintCallable)
    void SetFlipNormal(bool bInNewFlipNormal);
    
    UFUNCTION(BlueprintCallable)
    void SetBidirectional(bool bInNewBidirectional);
    
};

