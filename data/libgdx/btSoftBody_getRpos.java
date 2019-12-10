public btVector3 getRpos() {
    long cPtr = SoftbodyJNI.btSoftBody_CJoint_rpos_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
