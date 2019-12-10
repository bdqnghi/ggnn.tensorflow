public long allocate(long size_bytes) {
    return CollisionJNI.btGenericMemoryPool_allocate(swigCPtr, this, size_bytes);
}
