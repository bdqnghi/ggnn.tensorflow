public SWIGTYPE_p_p_btGenericMemoryPool getPools() {
    long cPtr = CollisionJNI.btGenericPoolAllocator_pools_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_p_btGenericMemoryPool(cPtr, false);
}
