public void setNodeBound(int nodeindex, btAABB bound) {
    CollisionJNI.btQuantizedBvhTree_setNodeBound(swigCPtr, this, nodeindex, btAABB.getCPtr(bound), bound);
}
