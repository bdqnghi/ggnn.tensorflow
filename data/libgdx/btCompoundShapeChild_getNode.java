public btDbvtNode getNode() {
    long cPtr = CollisionJNI.btCompoundShapeChild_node_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
