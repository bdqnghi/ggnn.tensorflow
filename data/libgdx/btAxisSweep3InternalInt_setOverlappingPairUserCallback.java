public void setOverlappingPairUserCallback(btOverlappingPairCallback pairCallback) {
    CollisionJNI.btAxisSweep3InternalInt_setOverlappingPairUserCallback(swigCPtr, this, btOverlappingPairCallback.getCPtr(pairCallback), pairCallback);
}
