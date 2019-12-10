public btVector3 getCachedP1() {
    long cPtr = CollisionJNI.btVoronoiSimplexSolver_cachedP1_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
