public void setAabb(btBroadphaseProxy proxy, Vector3 aabbMin, Vector3 aabbMax, btDispatcher dispatcher) {
    CollisionJNI.btBroadphaseInterface_setAabb(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy), proxy, aabbMin, aabbMax, btDispatcher.getCPtr(dispatcher), dispatcher);
}
