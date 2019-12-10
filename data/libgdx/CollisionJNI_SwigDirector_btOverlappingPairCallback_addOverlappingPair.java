public static long SwigDirector_btOverlappingPairCallback_addOverlappingPair(btOverlappingPairCallback jself, long proxy0, long proxy1) {
    return btBroadphasePair.getCPtr(jself.addOverlappingPair((proxy0 == 0) ? null : new btBroadphaseProxy(proxy0, false), (proxy1 == 0) ? null : new btBroadphaseProxy(proxy1, false)));
}
