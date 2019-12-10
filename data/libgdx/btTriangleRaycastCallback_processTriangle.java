public void processTriangle(btVector3 triangle, int partId, int triangleIndex) {
    if (getClass() == btTriangleRaycastCallback.class)
        CollisionJNI.btTriangleRaycastCallback_processTriangle(swigCPtr, this, btVector3.getCPtr(triangle), triangle, partId, triangleIndex);
    else
        CollisionJNI.btTriangleRaycastCallback_processTriangleSwigExplicitbtTriangleRaycastCallback(swigCPtr, this, btVector3.getCPtr(triangle), triangle, partId, triangleIndex);
}
