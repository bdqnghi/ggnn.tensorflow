public void updateRHS(float timeStep) {
    DynamicsJNI.btConeTwistConstraint_updateRHS(swigCPtr, this, timeStep);
}
