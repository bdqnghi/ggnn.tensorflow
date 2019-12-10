public void setSoftBodySolver(btSoftBodySolver value) {
    SoftbodyJNI.btSoftBody_softBodySolver_set(swigCPtr, this, btSoftBodySolver.getCPtr(value), value);
}
