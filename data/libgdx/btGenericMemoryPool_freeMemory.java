public boolean freeMemory(long pointer) {
    return CollisionJNI.btGenericMemoryPool_freeMemory(swigCPtr, this, pointer);
}
