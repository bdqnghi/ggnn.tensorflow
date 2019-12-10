public btHashedOverlappingPairCache getOverlappingPairCache() {
    long cPtr = CollisionJNI.btPairCachingGhostObject_getOverlappingPairCache(swigCPtr, this);
    return (cPtr == 0) ? null : new btHashedOverlappingPairCache(cPtr, false);
}
