public void dispatchAllCollisionPairs(btOverlappingPairCache pairCache, btDispatcherInfo dispatchInfo, btDispatcher dispatcher) {
    CollisionJNI.btDispatcher_dispatchAllCollisionPairs(swigCPtr, this, btOverlappingPairCache.getCPtr(pairCache), pairCache, btDispatcherInfo.getCPtr(dispatchInfo), dispatchInfo, btDispatcher.getCPtr(dispatcher), dispatcher);
}
