public void setRayNormalizedDirection(btVector3 value) {
    SoftbodyJNI.btSoftBody_RayFromToCaster_rayNormalizedDirection_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
