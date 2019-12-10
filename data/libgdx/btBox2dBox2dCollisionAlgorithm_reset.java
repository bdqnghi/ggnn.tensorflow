@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.btBox2dBox2dCollisionAlgorithm_CreateFunc_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
