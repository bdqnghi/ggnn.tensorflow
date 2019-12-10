@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(DynamicsJNI.btGeneric6DofConstraint_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
