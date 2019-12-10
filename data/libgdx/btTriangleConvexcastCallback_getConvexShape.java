public btConvexShape getConvexShape() {
    long cPtr = CollisionJNI.btTriangleConvexcastCallback_convexShape_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexShape(cPtr, false);
}
