public void processTriangle(btVector3 triangle, int partId, int triangleIndex) {
    if (getClass() == btConvexTriangleCallback.class)
        CollisionJNI.btConvexTriangleCallback_processTriangle(swigCPtr, this, btVector3.getCPtr(triangle), triangle, partId, triangleIndex);
    else
        CollisionJNI.btConvexTriangleCallback_processTriangleSwigExplicitbtConvexTriangleCallback(swigCPtr, this, btVector3.getCPtr(triangle), triangle, partId, triangleIndex);
}
