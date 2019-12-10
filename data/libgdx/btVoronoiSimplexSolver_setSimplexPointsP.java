public void setSimplexPointsP(btVector3 value) {
    CollisionJNI.btVoronoiSimplexSolver_simplexPointsP_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
