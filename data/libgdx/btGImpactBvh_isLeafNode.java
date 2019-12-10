public boolean isLeafNode(int nodeindex) {
    return CollisionJNI.btGImpactBvh_isLeafNode(swigCPtr, this, nodeindex);
}
