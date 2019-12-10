@Override
protected void reset(long cPtr, boolean cMemoryOwn) {
    if (!destroyed)
        destroy();
    super.reset(SoftbodyJNI.btCPUVertexBufferDescriptor_SWIGUpcast(swigCPtr = cPtr), cMemoryOwn);
}
