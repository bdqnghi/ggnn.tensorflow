public long removeOverlappingPair(int indexA, int indexB) {
    return CollisionJNI.btHashedSimplePairCache_removeOverlappingPair(swigCPtr, this, indexA, indexB);
}
