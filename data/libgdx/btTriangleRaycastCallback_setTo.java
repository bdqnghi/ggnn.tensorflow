public void setTo(btVector3 value) {
    CollisionJNI.btTriangleRaycastCallback_to_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
