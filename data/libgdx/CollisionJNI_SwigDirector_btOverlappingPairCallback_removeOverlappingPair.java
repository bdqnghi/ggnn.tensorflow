public static long SwigDirector_btOverlappingPairCallback_removeOverlappingPair(btOverlappingPairCallback jself, long proxy0, long proxy1, long dispatcher) {
    return jself.removeOverlappingPair((proxy0 == 0) ? null : new btBroadphaseProxy(proxy0, false), (proxy1 == 0) ? null : new btBroadphaseProxy(proxy1, false), (dispatcher == 0) ? null : new btDispatcher(dispatcher, false));
}
