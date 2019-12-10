public void reduceVertices(btUsageBitfield usedVerts) {
    CollisionJNI.btVoronoiSimplexSolver_reduceVertices(swigCPtr, this, btUsageBitfield.getCPtr(usedVerts), usedVerts);
}
