public void refit(btStridingMeshInterface triangles, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btOptimizedBvh_refit(swigCPtr, this, btStridingMeshInterface.getCPtr(triangles), triangles, aabbMin, aabbMax);
}
