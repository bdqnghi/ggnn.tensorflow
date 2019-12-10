public void setRayDirectionInverse(btVector3 value) {
    CollisionJNI.btBroadphaseRayCallback_rayDirectionInverse_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
