public int getLeftNode(int nodeindex) {
    return CollisionJNI.btQuantizedBvhTree_getLeftNode(swigCPtr, this, nodeindex);
}
