public btDbvtNode getChild(int index) {
    long cPtr = CollisionJNI.btDbvtNode_getChild(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
