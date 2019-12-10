public void compute_points(Vector3 p1, Vector3 p2) {
    CollisionJNI.btVoronoiSimplexSolver_compute_points(swigCPtr, this, p1, p2);
}
