public btDbvtNode getFree() {
    long cPtr = CollisionJNI.btDbvt_free_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
