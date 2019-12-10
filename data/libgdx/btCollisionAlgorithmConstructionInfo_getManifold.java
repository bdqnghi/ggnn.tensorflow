public btPersistentManifold getManifold() {
    long cPtr = CollisionJNI.btCollisionAlgorithmConstructionInfo_manifold_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btPersistentManifold(cPtr, false);
}
