public void setOverlapFilterCallback(btOverlapFilterCallback callback) {
    CollisionJNI.btOverlappingPairCache_setOverlapFilterCallback(swigCPtr, this, btOverlapFilterCallback.getCPtr(callback), callback);
}
