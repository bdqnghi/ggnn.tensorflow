public void unQuantize(btBroadphaseProxy proxy, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btAxisSweep3InternalInt_unQuantize(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy), proxy, aabbMin, aabbMax);
}
