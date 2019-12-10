public static void SwigDirector_btGhostPairCallback_removeOverlappingPairsContainingProxy(btGhostPairCallback jself, long arg0, long arg1) {
    jself.removeOverlappingPairsContainingProxy((arg0 == 0) ? null : new btBroadphaseProxy(arg0, false), (arg1 == 0) ? null : new btDispatcher(arg1, false));
}
