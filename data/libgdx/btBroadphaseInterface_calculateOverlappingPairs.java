public void calculateOverlappingPairs(btDispatcher dispatcher) {
    CollisionJNI.btBroadphaseInterface_calculateOverlappingPairs(swigCPtr, this, btDispatcher.getCPtr(dispatcher), dispatcher);
}
