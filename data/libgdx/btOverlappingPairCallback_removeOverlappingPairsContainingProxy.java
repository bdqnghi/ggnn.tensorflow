public void removeOverlappingPairsContainingProxy(btBroadphaseProxy proxy0, btDispatcher dispatcher) {
    CollisionJNI.btOverlappingPairCallback_removeOverlappingPairsContainingProxy(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0, btDispatcher.getCPtr(dispatcher), dispatcher);
}
