#pragma once
#include "CoreMinimal.h"
#include "EMapIconInstanceTextureType.generated.h"

UENUM(BlueprintType)
enum EMapIconInstanceTextureType {
    MAP_ICON_INSTANCE_TEXTURE_TYPE_TEXTURE,
    MAP_ICON_INSTANCE_TEXTURE_TYPE_DOT,
    MAP_ICON_INSTANCE_TEXTURE_TYPE_DIAMOND,
    MAP_ICON_INSTANCE_TEXTURE_TYPE_QUESTIONMARK,
    MAP_ICON_INSTANCE_TEXTURE_TYPE_ALTERNATE,
    MAP_ICON_INSTANCE_TEXTURE_TYPE_INVALID,
    MAP_ICON_INSTANCE_TEXTURE_TYPE_MAX UMETA(Hidden),
};

