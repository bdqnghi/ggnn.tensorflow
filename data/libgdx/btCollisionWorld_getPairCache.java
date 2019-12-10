public btOverlappingPairCache getPairCache() {
    long cPtr = CollisionJNI.btCollisionWorld_getPairCache(swigCPtr, this);
    return (cPtr == 0) ? null : new btOverlappingPairCache(cPtr, false);
}
