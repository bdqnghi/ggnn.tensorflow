public btDbvtNode getNode() {
    long cPtr = CollisionJNI.btDbvt_sStkCLN_node_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
