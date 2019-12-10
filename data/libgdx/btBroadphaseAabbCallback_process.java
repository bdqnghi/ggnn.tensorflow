public boolean process(btBroadphaseProxy proxy) {
    return CollisionJNI.btBroadphaseAabbCallback_process(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy), proxy);
}
