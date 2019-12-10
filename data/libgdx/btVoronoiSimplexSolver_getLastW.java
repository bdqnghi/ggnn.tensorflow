public btVector3 getLastW() {
    long cPtr = CollisionJNI.btVoronoiSimplexSolver_lastW_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
