public int findLinearSearch(btCollisionObject key) {
    return CollisionJNI.btCollisionObjectConstArray_findLinearSearch(swigCPtr, this, btCollisionObject.getCPtr(key), key);
}
