public btPersistentManifold getManifoldByIndexInternal(int index) {
    long cPtr = CollisionJNI.btCollisionDispatcher_getManifoldByIndexInternal__SWIG_0(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btPersistentManifold(cPtr, false);
}
