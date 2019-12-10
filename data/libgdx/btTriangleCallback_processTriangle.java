public void processTriangle(btVector3 triangle, int partId, int triangleIndex) {
    CollisionJNI.btTriangleCallback_processTriangle(swigCPtr, this, btVector3.getCPtr(triangle), triangle, partId, triangleIndex);
}
