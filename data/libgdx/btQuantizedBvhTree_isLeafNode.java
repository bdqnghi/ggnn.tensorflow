public boolean isLeafNode(int nodeindex) {
    return CollisionJNI.btQuantizedBvhTree_isLeafNode(swigCPtr, this, nodeindex);
}
