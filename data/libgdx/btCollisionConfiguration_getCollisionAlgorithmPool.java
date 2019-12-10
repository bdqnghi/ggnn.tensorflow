public btPoolAllocator getCollisionAlgorithmPool() {
    long cPtr = CollisionJNI.btCollisionConfiguration_getCollisionAlgorithmPool(swigCPtr, this);
    return (cPtr == 0) ? null : new btPoolAllocator(cPtr, false);
}
