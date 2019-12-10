public btTransform getTriangleToWorld() {
    long cPtr = CollisionJNI.btTriangleConvexcastCallback_triangleToWorld_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
