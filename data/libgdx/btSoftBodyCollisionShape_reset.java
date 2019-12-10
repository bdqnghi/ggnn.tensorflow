@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(SoftbodyJNI.btSoftBodyCollisionShape_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
