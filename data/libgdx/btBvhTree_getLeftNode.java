public int getLeftNode(int nodeindex) {
    return CollisionJNI.btBvhTree_getLeftNode(swigCPtr, this, nodeindex);
}
