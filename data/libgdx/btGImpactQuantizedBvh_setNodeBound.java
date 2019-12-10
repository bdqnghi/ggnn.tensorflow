public void setNodeBound(int nodeindex, btAABB bound) {
    CollisionJNI.btGImpactQuantizedBvh_setNodeBound(swigCPtr, this, nodeindex, btAABB.getCPtr(bound), bound);
}
