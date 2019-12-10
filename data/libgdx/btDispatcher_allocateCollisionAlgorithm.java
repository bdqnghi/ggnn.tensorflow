public long allocateCollisionAlgorithm(int size) {
    return CollisionJNI.btDispatcher_allocateCollisionAlgorithm(swigCPtr, this, size);
}
