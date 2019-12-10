public void setAabbForceUpdate(btBroadphaseProxy absproxy, Vector3 aabbMin, Vector3 aabbMax, btDispatcher arg3) {
    CollisionJNI.btDbvtBroadphase_setAabbForceUpdate(swigCPtr, this, btBroadphaseProxy.getCPtr(absproxy), absproxy, aabbMin, aabbMax, btDispatcher.getCPtr(arg3), arg3);
}
