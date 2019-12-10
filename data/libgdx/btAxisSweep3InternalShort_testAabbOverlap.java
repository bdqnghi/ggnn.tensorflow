public boolean testAabbOverlap(btBroadphaseProxy proxy0, btBroadphaseProxy proxy1) {
    return CollisionJNI.btAxisSweep3InternalShort_testAabbOverlap(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy0), proxy0, btBroadphaseProxy.getCPtr(proxy1), proxy1);
}
