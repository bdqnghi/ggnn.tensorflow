public void setSst(btSoftBody.SolverState value) {
    SoftbodyJNI.btSoftBody_sst_set(swigCPtr, this, btSoftBody.SolverState.getCPtr(value), value);
}
