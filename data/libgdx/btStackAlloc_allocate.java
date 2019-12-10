public java.nio.ByteBuffer allocate(long size) {
    return LinearMathJNI.btStackAlloc_allocate(swigCPtr, this, size);
}
