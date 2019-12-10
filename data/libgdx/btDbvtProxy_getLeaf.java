public btDbvtNode getLeaf() {
    long cPtr = CollisionJNI.btDbvtProxy_leaf_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
