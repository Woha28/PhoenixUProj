#pragma once
#include "CoreMinimal.h"
#include "SocialConnectionIDs.generated.h"

UENUM(BlueprintType)
enum SocialConnectionIDs {
    SOCIALCONNECTION_STATUS_ENEMY,
    SOCIALCONNECTION_STATUS_RIVAL,
    SOCIALCONNECTION_STATUS_SELF,
    SOCIALCONNECTION_STATUS_FRIEND,
    SOCIALCONNECTION_STATUS_FAMILY,
    SOCIALCONNECTION_STATUS_LOVEINTEREST,
    SOCIALCONNECTION_STATUS_BESTFRIEND,
    SOCIALCONNECTION_STATUS_COUNT,
    SOCIALCONNECTION_STATUS_MAX UMETA(Hidden),
};

