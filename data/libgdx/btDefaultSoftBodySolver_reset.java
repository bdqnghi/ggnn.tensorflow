@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(SoftbodyJNI.btDefaultSoftBodySolver_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
