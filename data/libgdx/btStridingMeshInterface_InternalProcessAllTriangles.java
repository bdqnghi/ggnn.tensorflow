public void InternalProcessAllTriangles(btInternalTriangleIndexCallback callback, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btStridingMeshInterface_InternalProcessAllTriangles(swigCPtr, this, btInternalTriangleIndexCallback.getCPtr(callback), callback, aabbMin, aabbMax);
}
