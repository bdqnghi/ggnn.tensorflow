public btContactSolverInfoDoubleData getSolverInfo() {
    long cPtr = DynamicsJNI.btDynamicsWorldDoubleData_solverInfo_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btContactSolverInfoDoubleData(cPtr, false);
}
