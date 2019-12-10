public btOverlapFilterCallback getOverlapFilterCallback() {
    long cPtr = CollisionJNI.btHashedOverlappingPairCache_getOverlapFilterCallback(swigCPtr, this);
    return (cPtr == 0) ? null : new btOverlapFilterCallback(cPtr, false);
}
