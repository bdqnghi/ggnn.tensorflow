public void processAllOverlappingPairs(btOverlapCallback arg0, btDispatcher dispatcher) {
    CollisionJNI.btOverlappingPairCache_processAllOverlappingPairs(swigCPtr, this, btOverlapCallback.getCPtr(arg0), arg0, btDispatcher.getCPtr(dispatcher), dispatcher);
}
