public btVector3 getX() {
    long cPtr = SoftbodyJNI.btSoftBody_Node_x_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
