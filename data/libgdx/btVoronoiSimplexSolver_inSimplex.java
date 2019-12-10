public boolean inSimplex(Vector3 w) {
    return CollisionJNI.btVoronoiSimplexSolver_inSimplex(swigCPtr, this, w);
}
