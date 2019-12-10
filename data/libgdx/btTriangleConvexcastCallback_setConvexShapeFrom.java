public void setConvexShapeFrom(btTransform value) {
    CollisionJNI.btTriangleConvexcastCallback_convexShapeFrom_set(swigCPtr, this, btTransform.getCPtr(value), value);
}
