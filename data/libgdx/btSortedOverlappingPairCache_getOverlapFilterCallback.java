public btOverlapFilterCallback getOverlapFilterCallback() {
    long cPtr = CollisionJNI.btSortedOverlappingPairCache_getOverlapFilterCallback(swigCPtr, this);
    return (cPtr == 0) ? null : new btOverlapFilterCallback(cPtr, false);
}
