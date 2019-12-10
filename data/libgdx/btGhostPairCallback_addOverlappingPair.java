public btBroadphasePair addOverlappingPair(btBroadphaseProxy proxy0, btBroadphaseProxy proxy1) {
    return btBroadphasePair.internalTemp((getClass() == btGhostPairCallback.class) ? CollisionJNI.btGhostPairCallback_addOverlappingPair(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0, btBroadphaseProxy.getCPtr(proxy1), proxy1) : CollisionJNI.btGhostPairCallback_addOverlappingPairSwigExplicitbtGhostPairCallback(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0, btBroadphaseProxy.getCPtr(proxy1), proxy1), false);
}
