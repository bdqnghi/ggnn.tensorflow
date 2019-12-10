public btConvexPenetrationDepthSolver getPdSolver() {
    long cPtr = CollisionJNI.btConvex2dConvex2dAlgorithm_CreateFunc_pdSolver_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexPenetrationDepthSolver(cPtr, false);
}
