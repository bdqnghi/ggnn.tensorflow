public void updateHandle(long handle, Vector3 aabbMin, Vector3 aabbMax, btDispatcher dispatcher) {
    CollisionJNI.btAxisSweep3InternalInt_updateHandle(swigCPtr, this, handle, aabbMin, aabbMax, btDispatcher.getCPtr(dispatcher), dispatcher);
}
