public btBroadphasePair findPair(btBroadphaseProxy proxy0, btBroadphaseProxy proxy1) {
    return btBroadphasePair.internalTemp(CollisionJNI.btOverlappingPairCache_findPair(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0, btBroadphaseProxy.getCPtr(proxy1), proxy1), false);
}
