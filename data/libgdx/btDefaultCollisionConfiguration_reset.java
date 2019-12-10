@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.btDefaultCollisionConfiguration_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
