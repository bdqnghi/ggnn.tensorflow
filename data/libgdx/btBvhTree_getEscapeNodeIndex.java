public int getEscapeNodeIndex(int nodeindex) {
    return CollisionJNI.btBvhTree_getEscapeNodeIndex(swigCPtr, this, nodeindex);
}
