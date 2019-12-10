public btVector3 getSimplexVectorW() {
    long cPtr = CollisionJNI.btVoronoiSimplexSolver_simplexVectorW_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
