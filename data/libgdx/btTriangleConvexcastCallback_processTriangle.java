public void processTriangle(btVector3 triangle, int partId, int triangleIndex) {
    if (getClass() == btTriangleConvexcastCallback.class)
        CollisionJNI.btTriangleConvexcastCallback_processTriangle(swigCPtr, this, btVector3.getCPtr(triangle), triangle, partId, triangleIndex);
    else
        CollisionJNI.btTriangleConvexcastCallback_processTriangleSwigExplicitbtTriangleConvexcastCallback(swigCPtr, this, btVector3.getCPtr(triangle), triangle, partId, triangleIndex);
}
