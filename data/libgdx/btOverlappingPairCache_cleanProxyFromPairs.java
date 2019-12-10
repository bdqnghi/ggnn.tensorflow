public void cleanProxyFromPairs(btBroadphaseProxy proxy, btDispatcher dispatcher) {
    CollisionJNI.btOverlappingPairCache_cleanProxyFromPairs(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy), proxy, btDispatcher.getCPtr(dispatcher), dispatcher);
}
