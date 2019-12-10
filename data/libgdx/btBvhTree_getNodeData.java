public int getNodeData(int nodeindex) {
    return CollisionJNI.btBvhTree_getNodeData(swigCPtr, this, nodeindex);
}
