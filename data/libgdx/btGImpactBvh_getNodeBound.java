public void getNodeBound(int nodeindex, btAABB bound) {
    CollisionJNI.btGImpactBvh_getNodeBound(swigCPtr, this, nodeindex, btAABB.getCPtr(bound), bound);
}
