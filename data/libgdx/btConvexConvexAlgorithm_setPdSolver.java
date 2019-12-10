public void setPdSolver(btConvexPenetrationDepthSolver value) {
    CollisionJNI.btConvexConvexAlgorithm_CreateFunc_pdSolver_set(swigCPtr, this, btConvexPenetrationDepthSolver.getCPtr(value), value);
}
