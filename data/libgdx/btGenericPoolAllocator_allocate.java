public long allocate(long size_bytes) {
    return CollisionJNI.btGenericPoolAllocator_allocate(swigCPtr, this, size_bytes);
}
