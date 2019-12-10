public void solveConstraintObsolete(btSolverBody arg0, btSolverBody arg1, float arg2) {
    DynamicsJNI.btTypedConstraint_solveConstraintObsolete(swigCPtr, this, btSolverBody.getCPtr(arg0), arg0, btSolverBody.getCPtr(arg1), arg1, arg2);
}
