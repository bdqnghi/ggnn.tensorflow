public void buildTree(Vector3 bvhAabbMin, Vector3 bvhAabbMax) {
    CollisionJNI.btMultiSapBroadphase_buildTree(swigCPtr, this, bvhAabbMin, bvhAabbMax);
}
