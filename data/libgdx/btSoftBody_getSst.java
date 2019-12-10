public btSoftBody.SolverState getSst() {
    long cPtr = SoftbodyJNI.btSoftBody_sst_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBody.SolverState(cPtr, false);
}
