public boolean needBroadphaseCollision(btBroadphaseProxy proxy0, btBroadphaseProxy proxy1) {
    return CollisionJNI.btOverlapFilterCallback_needBroadphaseCollision(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0, btBroadphaseProxy.getCPtr(proxy1), proxy1);
}
