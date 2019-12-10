public void setFrom(btVector3 value) {
    CollisionJNI.btTriangleRaycastCallback_from_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
