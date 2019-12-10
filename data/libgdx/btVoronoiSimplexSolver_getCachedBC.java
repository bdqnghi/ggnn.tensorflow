public btSubSimplexClosestResult getCachedBC() {
    long cPtr = CollisionJNI.btVoronoiSimplexSolver_cachedBC_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSubSimplexClosestResult(cPtr, false);
}
