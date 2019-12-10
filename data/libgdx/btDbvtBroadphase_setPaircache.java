public void setPaircache(btOverlappingPairCache value) {
    CollisionJNI.btDbvtBroadphase_paircache_set(swigCPtr, this, btOverlappingPairCache.getCPtr(value), value);
}
