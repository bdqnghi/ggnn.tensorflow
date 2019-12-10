public void updateRHS(float timeStep) {
    DynamicsJNI.btHingeConstraint_updateRHS(swigCPtr, this, timeStep);
}
