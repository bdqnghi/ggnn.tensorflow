public btDbvtNode getRoot() {
    long cPtr = CollisionJNI.btDbvt_root_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
