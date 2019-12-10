public void setSimplexSolver(btVoronoiSimplexSolver value) {
    CollisionJNI.btConvexConvexAlgorithm_CreateFunc_simplexSolver_set(swigCPtr, this, btVoronoiSimplexSolver.getCPtr(value), value);
}
