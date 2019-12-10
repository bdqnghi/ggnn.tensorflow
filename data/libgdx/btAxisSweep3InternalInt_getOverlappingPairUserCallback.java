public btOverlappingPairCallback getOverlappingPairUserCallback() {
    long cPtr = CollisionJNI.btAxisSweep3InternalInt_getOverlappingPairUserCallback(swigCPtr, this);
    return (cPtr == 0) ? null : new btOverlappingPairCallback(cPtr, false);
}
