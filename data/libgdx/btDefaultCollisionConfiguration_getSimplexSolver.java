public btVoronoiSimplexSolver getSimplexSolver() {
    long cPtr = CollisionJNI.btDefaultCollisionConfiguration_getSimplexSolver(swigCPtr, this);
    return (cPtr == 0) ? null : new btVoronoiSimplexSolver(cPtr, false);
}
