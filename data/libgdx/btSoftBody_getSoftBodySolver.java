public btSoftBodySolver getSoftBodySolver() {
    long cPtr = SoftbodyJNI.btSoftBody_softBodySolver_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBodySolver(cPtr, false);
}
