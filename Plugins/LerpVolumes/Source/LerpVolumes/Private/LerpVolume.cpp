#include "LerpVolume.h"

void ALerpVolume::SetPriority(float NewPriority) {
}

ALerpVolume::ALerpVolume() {
    this->Priority = 0.00f;
    this->BlendRadius = 100.00f;
    this->BlendWeight = 1.00f;
    this->bUnbounded = false;
    this->bEnabled = true;
}

