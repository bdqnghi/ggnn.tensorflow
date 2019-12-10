public void setNodeBound(int nodeindex, btAABB bound) {
    CollisionJNI.btGImpactBvh_setNodeBound(swigCPtr, this, nodeindex, btAABB.getCPtr(bound), bound);
}
