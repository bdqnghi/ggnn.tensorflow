public boolean freeMemory(long pointer) {
    return CollisionJNI.btGenericPoolAllocator_freeMemory(swigCPtr, this, pointer);
}
