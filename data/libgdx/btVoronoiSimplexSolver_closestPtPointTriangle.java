public boolean closestPtPointTriangle(Vector3 p, Vector3 a, Vector3 b, Vector3 c, btSubSimplexClosestResult result) {
    return CollisionJNI.btVoronoiSimplexSolver_closestPtPointTriangle(swigCPtr, this, p, a, b, c, btSubSimplexClosestResult.getCPtr(result), result);
}
