public void refitPartial(btStridingMeshInterface triangles, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btOptimizedBvh_refitPartial(swigCPtr, this, btStridingMeshInterface.getCPtr(triangles), triangles, aabbMin, aabbMax);
}
