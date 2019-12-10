@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.btGhostObject_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
