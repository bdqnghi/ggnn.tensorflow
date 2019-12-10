public void init_pool(long element_size, long element_count) {
    CollisionJNI.btGenericMemoryPool_init_pool(swigCPtr, this, element_size, element_count);
}
