public btBroadphasePairArray getOverlappingPairArray() {
    return new btBroadphasePairArray(CollisionJNI.btSortedOverlappingPairCache_getOverlappingPairArray__SWIG_0(swigCPtr, this), false);
}
