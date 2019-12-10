public void unQuantize(btBroadphaseProxy proxy, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btAxisSweep3InternalShort_unQuantize(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy), proxy, aabbMin, aabbMax);
}
