public btTransform getConvexShapeTo() {
    long cPtr = CollisionJNI.btTriangleConvexcastCallback_convexShapeTo_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransform(cPtr, false);
}
