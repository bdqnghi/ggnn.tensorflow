public btContactSolverInfo getSolverInfo() {
    return new btContactSolverInfo(DynamicsJNI.btDynamicsWorld_getSolverInfo(swigCPtr, this), false);
}
