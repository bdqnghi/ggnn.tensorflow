public void resetPool(btDispatcher dispatcher) {
    CollisionJNI.btBroadphaseInterface_resetPool(swigCPtr, this, btDispatcher.getCPtr(dispatcher), dispatcher);
}
