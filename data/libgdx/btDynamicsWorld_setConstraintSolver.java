public void setConstraintSolver(btConstraintSolver solver) {
    DynamicsJNI.btDynamicsWorld_setConstraintSolver(swigCPtr, this, btConstraintSolver.getCPtr(solver), solver);
}
