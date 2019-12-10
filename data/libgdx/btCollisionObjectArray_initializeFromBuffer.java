public void initializeFromBuffer(long buffer, int size, int capacity) {
    CollisionJNI.btCollisionObjectArray_initializeFromBuffer(swigCPtr, this, buffer, size, capacity);
}
