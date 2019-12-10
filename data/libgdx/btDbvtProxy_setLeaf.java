public void setLeaf(btDbvtNode value) {
    CollisionJNI.btDbvtProxy_leaf_set(swigCPtr, this, btDbvtNode.getCPtr(value), value);
}
