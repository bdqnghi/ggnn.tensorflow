public btVector3 getWindVelocity() {
    long cPtr = SoftbodyJNI.btSoftBody_windVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
