@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.bt32BitAxisSweep3_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
