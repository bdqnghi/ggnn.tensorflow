public void cleanOverlappingPair(btBroadphasePair pair, btDispatcher dispatcher) {
    CollisionJNI.btOverlappingPairCache_cleanOverlappingPair(swigCPtr, this, pair, btDispatcher.getCPtr(dispatcher), dispatcher);
}
