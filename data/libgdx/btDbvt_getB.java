public btDbvtNode getB() {
    long cPtr = CollisionJNI.btDbvt_sStkNN_b_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
