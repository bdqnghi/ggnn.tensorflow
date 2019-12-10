@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.btBox2dShape_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
