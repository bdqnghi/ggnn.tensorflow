public btBroadphasePair addOverlappingPair(btBroadphaseProxy proxy0, btBroadphaseProxy proxy1) {
    return btBroadphasePair.internalTemp(CollisionJNI.btOverlappingPairCallback_addOverlappingPair(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0, btBroadphaseProxy.getCPtr(proxy1), proxy1), false);
}
