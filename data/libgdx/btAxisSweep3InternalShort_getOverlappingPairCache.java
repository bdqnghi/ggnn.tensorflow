public btOverlappingPairCache getOverlappingPairCache() {
    long cPtr = CollisionJNI.btAxisSweep3InternalShort_getOverlappingPairCache__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btOverlappingPairCache(cPtr, false);
}
