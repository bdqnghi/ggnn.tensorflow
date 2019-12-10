public btTransform getConvexShapeFrom() {
    long cPtr = CollisionJNI.btTriangleConvexcastCallback_convexShapeFrom_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
