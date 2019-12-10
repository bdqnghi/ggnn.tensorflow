@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(ExtrasJNI.btBulletWorldImporter_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
