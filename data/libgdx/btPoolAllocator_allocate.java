public long allocate(int size) {
    return LinearMathJNI.btPoolAllocator_allocate(swigCPtr, this, size);
}
