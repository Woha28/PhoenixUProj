#pragma once
#include "CoreMinimal.h"
#include "SocialCapitalStatusIDs.generated.h"

UENUM(BlueprintType)
enum SocialCapitalStatusIDs {
    SOCIALCAPITAL_STATUS_STRANGER,
    SOCIALCAPITAL_STATUS_HATE,
    SOCIALCAPITAL_STATUS_DISLIKE,
    SOCIALCAPITAL_STATUS_INDIFFERENT,
    SOCIALCAPITAL_STATUS_FAMILIAR,
    SOCIALCAPITAL_STATUS_CORDIAL,
    SOCIALCAPITAL_STATUS_FRIENDLY,
    SOCIALCAPITAL_STATUS_COMPANION,
    SOCIALCAPITAL_STATUS_COUNT,
    SOCIALCAPITAL_STATUS_MAX UMETA(Hidden),
};

