public void removeHandle(int handle, btDispatcher dispatcher) {
    CollisionJNI.btAxisSweep3InternalShort_removeHandle(swigCPtr, this, handle, btDispatcher.getCPtr(dispatcher), dispatcher);
}
