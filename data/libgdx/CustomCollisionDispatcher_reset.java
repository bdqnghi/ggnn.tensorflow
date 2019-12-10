@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.CustomCollisionDispatcher_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
