public void removeHandle(long handle, btDispatcher dispatcher) {
    CollisionJNI.btAxisSweep3InternalInt_removeHandle(swigCPtr, this, handle, btDispatcher.getCPtr(dispatcher), dispatcher);
}
