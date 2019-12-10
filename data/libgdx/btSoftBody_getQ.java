public btVector3 getQ() {
    long cPtr = SoftbodyJNI.btSoftBody_Node_q_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
