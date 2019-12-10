@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(LinearMathJNI.btVector4_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
