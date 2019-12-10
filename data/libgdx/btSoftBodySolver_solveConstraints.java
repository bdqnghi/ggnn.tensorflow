public void solveConstraints(float solverdt) {
    SoftbodyJNI.btSoftBodySolver_solveConstraints(swigCPtr, this, solverdt);
}
