#include "FlipendoSpellTool.h"

class AActor;
class UPrimitiveComponent;

void AFlipendoSpellTool::FlipTarget(AActor* InTargetActor, UPrimitiveComponent* InTargetComp, const FVector& ImpactLocation) {
}

AFlipendoSpellTool::AFlipendoSpellTool() {
    this->CharacterImpulseScale = 1.00f;
    this->AOEMunition = NULL;
}

