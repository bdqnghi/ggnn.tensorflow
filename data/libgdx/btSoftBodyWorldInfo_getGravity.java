public btVector3 getGravity() {
    long cPtr = SoftbodyJNI.btSoftBodyWorldInfo_gravity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
