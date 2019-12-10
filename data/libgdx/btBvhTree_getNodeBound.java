public void getNodeBound(int nodeindex, btAABB bound) {
    CollisionJNI.btBvhTree_getNodeBound(swigCPtr, this, nodeindex, btAABB.getCPtr(bound), bound);
}
