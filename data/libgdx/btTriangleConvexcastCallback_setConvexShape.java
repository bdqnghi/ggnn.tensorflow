public void setConvexShape(btConvexShape value) {
    CollisionJNI.btTriangleConvexcastCallback_convexShape_set(swigCPtr, this, btConvexShape.getCPtr(value), value);
}
