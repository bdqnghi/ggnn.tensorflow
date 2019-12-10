@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(LinearMathJNI.btDefaultMotionState_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
