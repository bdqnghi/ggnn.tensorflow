public btSimplePair findPair(int indexA, int indexB) {
    long cPtr = CollisionJNI.btHashedSimplePairCache_findPair(swigCPtr, this, indexA, indexB);
    return (cPtr == 0) ? null : new btSimplePair(cPtr, false);
}
