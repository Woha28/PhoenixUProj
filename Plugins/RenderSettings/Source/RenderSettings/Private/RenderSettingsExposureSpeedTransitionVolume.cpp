#include "RenderSettingsExposureSpeedTransitionVolume.h"

ARenderSettingsExposureSpeedTransitionVolume::ARenderSettingsExposureSpeedTransitionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpeedUp = 12.00f;
    this->SpeedDown = 12.00f;
    this->bUseFilteredIndoors = false;
    this->bOverride_SpeedUp = true;
    this->bOverride_SpeedDown = true;
}

