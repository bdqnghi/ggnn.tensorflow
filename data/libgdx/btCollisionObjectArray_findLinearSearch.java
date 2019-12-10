public int findLinearSearch(btCollisionObject key) {
    return CollisionJNI.btCollisionObjectArray_findLinearSearch(swigCPtr, this, btCollisionObject.getCPtr(key), key);
}
