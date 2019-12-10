public void setSimplexPointsQ(btVector3 value) {
    CollisionJNI.btVoronoiSimplexSolver_simplexPointsQ_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
