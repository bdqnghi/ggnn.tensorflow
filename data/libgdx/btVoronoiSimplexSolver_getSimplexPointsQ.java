public btVector3 getSimplexPointsQ() {
    long cPtr = CollisionJNI.btVoronoiSimplexSolver_simplexPointsQ_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
