public btPersistentManifold getManifold() {
    long cPtr = CollisionJNI.btConvexConvexAlgorithm_getManifold(swigCPtr, this);
    return (cPtr == 0) ? null : new btPersistentManifold(cPtr, false);
}
