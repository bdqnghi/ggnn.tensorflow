public static void SwigDirector_btOverlappingPairCallback_removeOverlappingPairsContainingProxy(btOverlappingPairCallback jself, long proxy0, long dispatcher) {
    jself.removeOverlappingPairsContainingProxy((proxy0 == 0) ? null : new btBroadphaseProxy(proxy0, false), (dispatcher == 0) ? null : new btDispatcher(dispatcher, false));
}
