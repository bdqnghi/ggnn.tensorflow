public void destroyProxy(btBroadphaseProxy proxy, btDispatcher dispatcher) {
    CollisionJNI.btBroadphaseInterface_destroyProxy(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy), proxy, btDispatcher.getCPtr(dispatcher), dispatcher);
}
