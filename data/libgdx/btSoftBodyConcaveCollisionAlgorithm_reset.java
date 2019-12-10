@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(SoftbodyJNI.btSoftBodyConcaveCollisionAlgorithm_SwappedCreateFunc_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
