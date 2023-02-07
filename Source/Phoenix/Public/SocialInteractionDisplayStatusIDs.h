#pragma once
#include "CoreMinimal.h"
#include "SocialInteractionDisplayStatusIDs.generated.h"

UENUM(BlueprintType)
enum SocialInteractionDisplayStatusIDs {
    SOCIAL_INTERACTION_DISPLAY_STATUS_AVAILABLE,
    SOCIAL_INTERACTION_DISPLAY_STATUS_HIDDEN,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_ASKEDFORFAVOR,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_BEINGEXTORTED,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_CRIMECITATIONS,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_ITEM,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_KNOWLEDGE,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_LOCK,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_MISSION,
    SOCIAL_INTERACTION_DISPLAY_STATUS_LOCKED_SOCAP,
    SOCIAL_INTERACTION_DISPLAY_STATUS_COUNT,
    SOCIAL_INTERACTION_DISPLAY_STATUS_MAX UMETA(Hidden),
};

