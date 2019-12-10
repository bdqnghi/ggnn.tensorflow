public btSimplePair getOverlappingPairArrayPtr() {
    long cPtr = CollisionJNI.btHashedSimplePairCache_getOverlappingPairArrayPtr__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btSimplePair(cPtr, false);
}
