public int findBinarySearch(btCollisionObject key) {
    return CollisionJNI.btCollisionObjectConstArray_findBinarySearch(swigCPtr, this, btCollisionObject.getCPtr(key), key);
}
