public void addVertex(Vector3 w, Vector3 p, Vector3 q) {
    CollisionJNI.btVoronoiSimplexSolver_addVertex(swigCPtr, this, w, p, q);
}
