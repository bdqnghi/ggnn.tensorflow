public void setRayTo(btVector3 value) {
    SoftbodyJNI.btSoftBody_RayFromToCaster_rayTo_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
