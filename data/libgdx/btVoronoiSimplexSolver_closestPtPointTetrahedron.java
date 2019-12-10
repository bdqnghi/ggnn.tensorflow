public boolean closestPtPointTetrahedron(Vector3 p, Vector3 a, Vector3 b, Vector3 c, Vector3 d, btSubSimplexClosestResult finalResult) {
    return CollisionJNI.btVoronoiSimplexSolver_closestPtPointTetrahedron(swigCPtr, this, p, a, b, c, d, btSubSimplexClosestResult.getCPtr(finalResult), finalResult);
}
