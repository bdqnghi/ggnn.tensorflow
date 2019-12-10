public void setAabbMax(btVector3 value) {
    CollisionJNI.btBroadphaseProxy_aabbMax_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
