public int pointOutsideOfPlane(Vector3 p, Vector3 a, Vector3 b, Vector3 c, Vector3 d) {
    return CollisionJNI.btVoronoiSimplexSolver_pointOutsideOfPlane(swigCPtr, this, p, a, b, c, d);
}
