public void setRayFrom(btVector3 value) {
    SoftbodyJNI.btSoftBody_RayFromToCaster_rayFrom_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
