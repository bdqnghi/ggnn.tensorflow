public boolean closest(Vector3 v) {
    return CollisionJNI.btVoronoiSimplexSolver_closest(swigCPtr, this, v);
}
