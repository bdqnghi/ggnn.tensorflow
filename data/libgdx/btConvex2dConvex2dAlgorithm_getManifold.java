public btPersistentManifold getManifold() {
    long cPtr = CollisionJNI.btConvex2dConvex2dAlgorithm_getManifold(swigCPtr, this);
    return (cPtr == 0) ? null : new btPersistentManifold(cPtr, false);
}
