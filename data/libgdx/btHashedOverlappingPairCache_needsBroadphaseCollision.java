public boolean needsBroadphaseCollision(btBroadphaseProxy proxy0, btBroadphaseProxy proxy1) {
    return CollisionJNI.btHashedOverlappingPairCache_needsBroadphaseCollision(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0, btBroadphaseProxy.getCPtr(proxy1), proxy1);
}
