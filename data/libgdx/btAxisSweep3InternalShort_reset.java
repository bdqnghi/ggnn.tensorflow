@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.btAxisSweep3InternalShort_Handle_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
