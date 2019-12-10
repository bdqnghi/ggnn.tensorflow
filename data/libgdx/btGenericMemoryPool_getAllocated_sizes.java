public SWIGTYPE_p_size_t getAllocated_sizes() {
    long cPtr = CollisionJNI.btGenericMemoryPool_allocated_sizes_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_size_t(cPtr, false);
}
