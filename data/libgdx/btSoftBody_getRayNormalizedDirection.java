public btVector3 getRayNormalizedDirection() {
    long cPtr = SoftbodyJNI.btSoftBody_RayFromToCaster_rayNormalizedDirection_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
