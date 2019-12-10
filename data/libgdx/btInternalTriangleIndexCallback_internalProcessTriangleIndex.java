public void internalProcessTriangleIndex(btVector3 triangle, int partId, int triangleIndex) {
    CollisionJNI.btInternalTriangleIndexCallback_internalProcessTriangleIndex(swigCPtr, this, btVector3.getCPtr(triangle), triangle, partId, triangleIndex);
}
