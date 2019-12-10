@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.btAxisSweep3InternalInt_Handle_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
