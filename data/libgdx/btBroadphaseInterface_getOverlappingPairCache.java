public btOverlappingPairCache getOverlappingPairCache() {
    long cPtr = CollisionJNI.btBroadphaseInterface_getOverlappingPairCache__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btOverlappingPairCache(cPtr, false);
}
