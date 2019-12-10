public void setSimplexSolver(btVoronoiSimplexSolver value) {
    CollisionJNI.btConvex2dConvex2dAlgorithm_CreateFunc_simplexSolver_set(swigCPtr, this, btVoronoiSimplexSolver.getCPtr(value), value);
}
