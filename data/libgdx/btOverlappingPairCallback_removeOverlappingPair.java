public long removeOverlappingPair(btBroadphaseProxy proxy0, btBroadphaseProxy proxy1, btDispatcher dispatcher) {
    return CollisionJNI.btOverlappingPairCallback_removeOverlappingPair(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0, btBroadphaseProxy.getCPtr(proxy1), proxy1, btDispatcher.getCPtr(dispatcher), dispatcher);
}
