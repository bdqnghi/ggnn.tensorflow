public btPoolAllocator getPersistentManifoldPool() {
    long cPtr = CollisionJNI.btDefaultCollisionConstructionInfo_persistentManifoldPool_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btPoolAllocator(cPtr, false);
}
