public boolean isLeafNode(int nodeindex) {
    return CollisionJNI.btBvhTree_isLeafNode(swigCPtr, this, nodeindex);
}
