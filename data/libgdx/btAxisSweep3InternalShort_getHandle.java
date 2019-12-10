public btAxisSweep3InternalShort.Handle getHandle(int index) {
    long cPtr = CollisionJNI.btAxisSweep3InternalShort_getHandle(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btAxisSweep3InternalShort.Handle(cPtr, false);
}
