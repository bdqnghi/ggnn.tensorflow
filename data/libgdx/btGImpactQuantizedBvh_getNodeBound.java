public void getNodeBound(int nodeindex, btAABB bound) {
    CollisionJNI.btGImpactQuantizedBvh_getNodeBound(swigCPtr, this, nodeindex, btAABB.getCPtr(bound), bound);
}
