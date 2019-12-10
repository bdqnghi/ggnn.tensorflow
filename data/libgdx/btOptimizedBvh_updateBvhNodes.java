public void updateBvhNodes(btStridingMeshInterface meshInterface, int firstNode, int endNode, int index) {
    CollisionJNI.btOptimizedBvh_updateBvhNodes(swigCPtr, this, btStridingMeshInterface.getCPtr(meshInterface), meshInterface, firstNode, endNode, index);
}
