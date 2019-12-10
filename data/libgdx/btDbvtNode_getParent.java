public btDbvtNode getParent() {
    long cPtr = CollisionJNI.btDbvtNode_parent_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
