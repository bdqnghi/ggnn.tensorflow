@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(DynamicsJNI.btGeneric6DofSpringConstraint_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
