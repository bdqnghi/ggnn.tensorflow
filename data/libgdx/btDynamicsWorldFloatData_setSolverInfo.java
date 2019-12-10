public void setSolverInfo(btContactSolverInfoFloatData value) {
    DynamicsJNI.btDynamicsWorldFloatData_solverInfo_set(swigCPtr, this, btContactSolverInfoFloatData.getCPtr(value), value);
}
