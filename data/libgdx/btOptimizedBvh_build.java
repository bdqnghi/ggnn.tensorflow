public void build(btStridingMeshInterface triangles, boolean useQuantizedAabbCompression, Vector3 bvhAabbMin, Vector3 bvhAabbMax) {
    CollisionJNI.btOptimizedBvh_build(swigCPtr, this, btStridingMeshInterface.getCPtr(triangles), triangles, useQuantizedAabbCompression, bvhAabbMin, bvhAabbMax);
}
