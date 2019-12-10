public void allSolved(btContactSolverInfo arg0, btIDebugDraw arg1) {
    DynamicsJNI.btConstraintSolver_allSolved(swigCPtr, this, btContactSolverInfo.getCPtr(arg0), arg0, btIDebugDraw.getCPtr(arg1), arg1);
}
