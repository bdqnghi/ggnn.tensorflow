public int findLinearSearch(btPersistentManifold key) {
    return CollisionJNI.btPersistentManifoldArray_findLinearSearch(swigCPtr, this, btPersistentManifold.getCPtr(key), key);
}
