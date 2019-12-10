public btPersistentManifold at(int n) {
    long cPtr = CollisionJNI.btPersistentManifoldArray_at__SWIG_0(swigCPtr, this, n);
    return (cPtr == 0) ? null : new btPersistentManifold(cPtr, false);
}
