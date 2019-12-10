public btVector3 getSdrift() {
    long cPtr = SoftbodyJNI.btSoftBody_Joint_sdrift_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
