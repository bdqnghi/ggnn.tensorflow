public int getNodeData(int nodeindex) {
    return CollisionJNI.btQuantizedBvhTree_getNodeData(swigCPtr, this, nodeindex);
}
