public void setAabbMin(btVector3 value) {
    CollisionJNI.btBroadphaseProxy_aabbMin_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
