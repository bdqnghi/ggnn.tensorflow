public btVector3 getSimplexPointsP() {
    long cPtr = CollisionJNI.btVoronoiSimplexSolver_simplexPointsP_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
