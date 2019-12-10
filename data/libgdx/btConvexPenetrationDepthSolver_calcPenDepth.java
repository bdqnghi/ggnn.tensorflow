public boolean calcPenDepth(btVoronoiSimplexSolver simplexSolver, btConvexShape convexA, btConvexShape convexB, Matrix4 transA, Matrix4 transB, Vector3 v, Vector3 pa, Vector3 pb, btIDebugDraw debugDraw) {
    return CollisionJNI.btConvexPenetrationDepthSolver_calcPenDepth(swigCPtr, this, btVoronoiSimplexSolver.getCPtr(simplexSolver), simplexSolver, btConvexShape.getCPtr(convexA), convexA, btConvexShape.getCPtr(convexB), convexB, transA, transB, v, pa, pb, btIDebugDraw.getCPtr(debugDraw), debugDraw);
}
