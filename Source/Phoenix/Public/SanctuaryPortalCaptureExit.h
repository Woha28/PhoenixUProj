#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "SanctuaryPortalCaptureExit.generated.h"

class USceneCaptureComponentCubeIncremental;

UCLASS(Abstract, Blueprintable)
class ASanctuaryPortalCaptureExit : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponentCubeIncremental* SceneCaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> HiddenActorClasses;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> HiddenActorInstances;
    
    ASanctuaryPortalCaptureExit();
};

