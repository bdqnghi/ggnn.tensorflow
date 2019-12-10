@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(DynamicsJNI.btPoint2PointConstraint_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
