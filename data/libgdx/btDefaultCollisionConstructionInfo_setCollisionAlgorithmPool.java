public void setCollisionAlgorithmPool(btPoolAllocator value) {
    CollisionJNI.btDefaultCollisionConstructionInfo_collisionAlgorithmPool_set(swigCPtr, this, btPoolAllocator.getCPtr(value), value);
}
