#include "TesselatedPlaneParams.h"

FTesselatedPlaneParams::FTesselatedPlaneParams() {
    this->XSize = 0.00f;
    this->YSize = 0.00f;
    this->VertSpacing = 0.00f;
    this->DefaultZ = 0.00f;
    this->UVTiling = 0.00f;
    this->bUseUVs = false;
    this->bHasCollision = false;
    this->bUseVertexColors = false;
    this->bCreateNormals = false;
    this->bCreateTangents = false;
}

