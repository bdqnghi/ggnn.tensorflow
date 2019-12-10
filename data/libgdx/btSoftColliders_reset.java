@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(SoftbodyJNI.btSoftColliders_CollideVF_SS_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
