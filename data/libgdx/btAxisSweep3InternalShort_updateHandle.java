public void updateHandle(int handle, Vector3 aabbMin, Vector3 aabbMax, btDispatcher dispatcher) {
    CollisionJNI.btAxisSweep3InternalShort_updateHandle(swigCPtr, this, handle, aabbMin, aabbMax, btDispatcher.getCPtr(dispatcher), dispatcher);
}
