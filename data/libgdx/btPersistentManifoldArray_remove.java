public void remove(btPersistentManifold key) {
    CollisionJNI.btPersistentManifoldArray_remove(swigCPtr, this, btPersistentManifold.getCPtr(key), key);
}
