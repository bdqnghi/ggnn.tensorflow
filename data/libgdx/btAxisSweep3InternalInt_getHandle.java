public btAxisSweep3InternalInt.Handle getHandle(long index) {
    long cPtr = CollisionJNI.btAxisSweep3InternalInt_getHandle(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btAxisSweep3InternalInt.Handle(cPtr, false);
}
