public btVector3 getF() {
    long cPtr = SoftbodyJNI.btSoftBody_Node_f_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
