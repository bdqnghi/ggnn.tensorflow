public btPoolAllocator getCollisionAlgorithmPool() {
    long cPtr = CollisionJNI.btDefaultCollisionConstructionInfo_collisionAlgorithmPool_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btPoolAllocator(cPtr, false);
}
