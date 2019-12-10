public btVector3 getAabbMax() {
    long cPtr = CollisionJNI.btBroadphaseProxy_aabbMax_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
