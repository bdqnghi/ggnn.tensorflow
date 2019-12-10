public btVector3 getCachedP2() {
    long cPtr = CollisionJNI.btVoronoiSimplexSolver_cachedP2_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
