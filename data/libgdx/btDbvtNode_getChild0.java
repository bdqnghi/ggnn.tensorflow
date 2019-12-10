public btDbvtNode getChild0() {
    long cPtr = CollisionJNI.btDbvtNode_getChild0(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
