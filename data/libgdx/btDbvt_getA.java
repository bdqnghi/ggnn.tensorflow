public btDbvtNode getA() {
    long cPtr = CollisionJNI.btDbvt_sStkNN_a_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
