public btDbvtNode getParent() {
    long cPtr = CollisionJNI.btDbvt_sStkCLN_parent_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
