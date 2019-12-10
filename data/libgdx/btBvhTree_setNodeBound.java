public void setNodeBound(int nodeindex, btAABB bound) {
    CollisionJNI.btBvhTree_setNodeBound(swigCPtr, this, nodeindex, btAABB.getCPtr(bound), bound);
}
