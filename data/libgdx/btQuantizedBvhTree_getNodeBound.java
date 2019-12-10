public void getNodeBound(int nodeindex, btAABB bound) {
    CollisionJNI.btQuantizedBvhTree_getNodeBound(swigCPtr, this, nodeindex, btAABB.getCPtr(bound), bound);
}
