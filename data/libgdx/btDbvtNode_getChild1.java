public btDbvtNode getChild1() {
    long cPtr = CollisionJNI.btDbvtNode_getChild1(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
