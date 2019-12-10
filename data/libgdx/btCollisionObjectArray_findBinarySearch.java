public int findBinarySearch(btCollisionObject key) {
    return CollisionJNI.btCollisionObjectArray_findBinarySearch(swigCPtr, this, btCollisionObject.getCPtr(key), key);
}
