public void initializeFromBuffer(long buffer, int size, int capacity) {
    CollisionJNI.btCollisionObjectConstArray_initializeFromBuffer(swigCPtr, this, buffer, size, capacity);
}
