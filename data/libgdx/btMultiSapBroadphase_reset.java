@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.btMultiSapBroadphase_btMultiSapProxy_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
