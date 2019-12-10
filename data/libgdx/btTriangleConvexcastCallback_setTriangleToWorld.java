public void setTriangleToWorld(btTransform value) {
    CollisionJNI.btTriangleConvexcastCallback_triangleToWorld_set(swigCPtr, this, btTransform.getCPtr(value), value);
}
