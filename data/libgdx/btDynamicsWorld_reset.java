@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(DynamicsJNI.btDynamicsWorld_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
