public btVector3 getC1() {
    long cPtr = SoftbodyJNI.btSoftBody_Anchor_c1_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
