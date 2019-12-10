@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(DynamicsJNI.btSequentialImpulseConstraintSolver_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
