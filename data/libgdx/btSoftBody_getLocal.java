public btVector3 getLocal() {
    long cPtr = SoftbodyJNI.btSoftBody_Anchor_local_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
