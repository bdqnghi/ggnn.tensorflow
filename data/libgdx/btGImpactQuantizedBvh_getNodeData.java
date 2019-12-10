public int getNodeData(int nodeindex) {
    return CollisionJNI.btGImpactQuantizedBvh_getNodeData(swigCPtr, this, nodeindex);
}
