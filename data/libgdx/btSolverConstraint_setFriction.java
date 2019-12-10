public void setFriction(float value) {
    DynamicsJNI.btSolverConstraint_friction_set(swigCPtr, this, value);
}
