@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(DynamicsJNI.btSliderConstraint_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
