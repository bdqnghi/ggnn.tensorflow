public boolean testAabbOverlap(btBroadphaseProxy proxy0, btBroadphaseProxy proxy1) {
    return CollisionJNI.btSimpleBroadphase_testAabbOverlap(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0, btBroadphaseProxy.getCPtr(proxy1), proxy1);
}
