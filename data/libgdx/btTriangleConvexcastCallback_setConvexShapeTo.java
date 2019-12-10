public void setConvexShapeTo(btTransform value) {
    CollisionJNI.btTriangleConvexcastCallback_convexShapeTo_set(swigCPtr, this, btTransform.getCPtr(value), value);
}
