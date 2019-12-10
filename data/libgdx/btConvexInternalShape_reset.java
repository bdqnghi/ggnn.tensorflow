@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.btConvexInternalShape_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
