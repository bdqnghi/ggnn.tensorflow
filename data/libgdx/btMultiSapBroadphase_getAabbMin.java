public btVector3 getAabbMin() {
    long cPtr = CollisionJNI.btMultiSapBroadphase_btMultiSapProxy_aabbMin_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
