public btConvexPenetrationDepthSolver getPdSolver() {
    long cPtr = CollisionJNI.btConvexConvexAlgorithm_CreateFunc_pdSolver_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btConvexPenetrationDepthSolver(cPtr, false);
}
