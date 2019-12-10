public int findBinarySearch(btPersistentManifold key) {
    return CollisionJNI.btPersistentManifoldArray_findBinarySearch(swigCPtr, this, btPersistentManifold.getCPtr(key), key);
}
