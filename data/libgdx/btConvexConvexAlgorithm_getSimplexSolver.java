public btVoronoiSimplexSolver getSimplexSolver() {
    long cPtr = CollisionJNI.btConvexConvexAlgorithm_CreateFunc_simplexSolver_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVoronoiSimplexSolver(cPtr, false);
}
