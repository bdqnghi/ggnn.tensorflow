public void setInternalGhostPairCallback(btOverlappingPairCallback ghostPairCallback) {
    CollisionJNI.btOverlappingPairCache_setInternalGhostPairCallback(swigCPtr, this, btOverlappingPairCallback.getCPtr(ghostPairCallback), ghostPairCallback);
}
