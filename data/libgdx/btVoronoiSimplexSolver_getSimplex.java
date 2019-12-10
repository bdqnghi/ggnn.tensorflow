public int getSimplex(btVector3 pBuf, btVector3 qBuf, btVector3 yBuf) {
    return CollisionJNI.btVoronoiSimplexSolver_getSimplex(swigCPtr, this, btVector3.getCPtr(pBuf), pBuf, btVector3.getCPtr(qBuf), qBuf, btVector3.getCPtr(yBuf), yBuf);
}
