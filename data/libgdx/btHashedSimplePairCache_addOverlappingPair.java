public btSimplePair addOverlappingPair(int indexA, int indexB) {
    long cPtr = CollisionJNI.btHashedSimplePairCache_addOverlappingPair(swigCPtr, this, indexA, indexB);
    return (cPtr == 0) ? null : new btSimplePair(cPtr, false);
}
