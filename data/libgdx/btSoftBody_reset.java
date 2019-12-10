@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(SoftbodyJNI.btSoftBody_RayFromToCaster_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
