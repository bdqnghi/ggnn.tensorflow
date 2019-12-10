@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.btHashedOverlappingPairCache_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
