@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(CollisionJNI.btCylinderShapeX_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
