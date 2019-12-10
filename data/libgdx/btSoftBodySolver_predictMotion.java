public void predictMotion(float solverdt) {
    SoftbodyJNI.btSoftBodySolver_predictMotion(swigCPtr, this, solverdt);
}
