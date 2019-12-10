public btPersistentManifold getManifoldByIndexInternal(int index) {
    long cPtr = CollisionJNI.btDispatcher_getManifoldByIndexInternal(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btPersistentManifold(cPtr, false);
}
