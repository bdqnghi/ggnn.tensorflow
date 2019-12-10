public btContactSolverInfoFloatData getSolverInfo() {
    long cPtr = DynamicsJNI.btDynamicsWorldFloatData_solverInfo_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btContactSolverInfoFloatData(cPtr, false);
}
