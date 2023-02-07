#pragma once
#include "CoreMinimal.h"
#include "EMiniMapTextureQuadrant.generated.h"

UENUM(BlueprintType)
enum EMiniMapTextureQuadrant {
    MINIMAP_TEXTURE_QUADRANT_LEFT,
    MINIMAP_TEXTURE_QUADRANT_RIGHT,
    MINIMAP_TEXTURE_QUADRANT_TOP,
    MINIMAP_TEXTURE_QUADRANT_BOTTOM,
    MINIMAP_TEXTURE_QUADRANT_TOP_RIGHT,
    MINIMAP_TEXTURE_QUADRANT_BOTTOM_LEFT,
    MINIMAP_TEXTURE_QUADRANT_TOP_LEFT,
    MINIMAP_TEXTURE_QUADRANT_BOTTOM_RIGHT,
    MINIMAP_TEXTURE_QUADRANT_MAX UMETA(Hidden),
};

