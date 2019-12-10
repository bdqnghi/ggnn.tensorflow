public btBroadphasePairArray getOverlappingPairArray() {
    return new btBroadphasePairArray(CollisionJNI.btOverlappingPairCache_getOverlappingPairArray(swigCPtr, this), false);
}
