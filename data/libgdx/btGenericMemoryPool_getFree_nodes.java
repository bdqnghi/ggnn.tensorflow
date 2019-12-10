public SWIGTYPE_p_size_t getFree_nodes() {
    long cPtr = CollisionJNI.btGenericMemoryPool_free_nodes_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_size_t(cPtr, false);
}
