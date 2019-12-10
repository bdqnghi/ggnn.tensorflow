@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(SoftbodyJNI.btSoftRigidDynamicsWorld_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
