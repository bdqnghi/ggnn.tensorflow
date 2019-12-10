public btVector3 getCachedV() {
    long cPtr = CollisionJNI.btVoronoiSimplexSolver_cachedV_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
