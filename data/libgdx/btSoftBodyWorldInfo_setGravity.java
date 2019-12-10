public void setGravity(btVector3 value) {
    SoftbodyJNI.btSoftBodyWorldInfo_gravity_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
