public void setupSolverConstraint(SWIGTYPE_p_btAlignedObjectArrayT_btSolverConstraint_t ca, int solverBodyA, int solverBodyB, float timeStep) {
    DynamicsJNI.btTypedConstraint_setupSolverConstraint(swigCPtr, this, SWIGTYPE_p_btAlignedObjectArrayT_btSolverConstraint_t.getCPtr(ca), solverBodyA, solverBodyB, timeStep);
}
