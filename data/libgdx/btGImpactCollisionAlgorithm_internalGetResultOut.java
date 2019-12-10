public btManifoldResult internalGetResultOut() {
    long cPtr = CollisionJNI.btGImpactCollisionAlgorithm_internalGetResultOut(swigCPtr, this);
    return (cPtr == 0) ? null : new btManifoldResult(cPtr, false);
}
