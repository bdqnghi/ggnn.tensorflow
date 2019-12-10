public void setDynamicsWorldInfo(Vector3 gravity, btContactSolverInfo solverInfo) {
    ExtrasJNI.btWorldImporter_setDynamicsWorldInfo(swigCPtr, this, gravity, btContactSolverInfo.getCPtr(solverInfo), solverInfo);
}
