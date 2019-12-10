public btVector3 getV() {
    long cPtr = SoftbodyJNI.btSoftBody_Node_v_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
