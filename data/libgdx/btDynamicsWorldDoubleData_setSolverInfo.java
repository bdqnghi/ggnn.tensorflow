public void setSolverInfo(btContactSolverInfoDoubleData value) {
    DynamicsJNI.btDynamicsWorldDoubleData_solverInfo_set(swigCPtr, this, btContactSolverInfoDoubleData.getCPtr(value), value);
}
