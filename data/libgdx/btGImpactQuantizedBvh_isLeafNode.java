public boolean isLeafNode(int nodeindex) {
    return CollisionJNI.btGImpactQuantizedBvh_isLeafNode(swigCPtr, this, nodeindex);
}
