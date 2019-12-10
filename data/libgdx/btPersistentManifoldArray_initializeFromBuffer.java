public void initializeFromBuffer(long buffer, int size, int capacity) {
    CollisionJNI.btPersistentManifoldArray_initializeFromBuffer(swigCPtr, this, buffer, size, capacity);
}
