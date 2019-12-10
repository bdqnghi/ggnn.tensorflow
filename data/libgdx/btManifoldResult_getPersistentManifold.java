public btPersistentManifold getPersistentManifold() {
    long cPtr = CollisionJNI.btManifoldResult_getPersistentManifold__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btPersistentManifold(cPtr, false);
}
