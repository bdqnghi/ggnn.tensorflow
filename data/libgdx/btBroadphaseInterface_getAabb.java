public void getAabb(btBroadphaseProxy proxy, Vector3 aabbMin, Vector3 aabbMax) {
    CollisionJNI.btBroadphaseInterface_getAabb(swigCPtr, this, btBroadphaseProxy.getCPtr(proxy), proxy, aabbMin, aabbMax);
}
