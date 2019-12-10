public btOverlappingPairCache getPaircache() {
    long cPtr = CollisionJNI.btDbvtBroadphase_paircache_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btOverlappingPairCache(cPtr, false);
}
