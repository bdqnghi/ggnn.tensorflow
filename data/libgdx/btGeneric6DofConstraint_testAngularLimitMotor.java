public boolean testAngularLimitMotor(int axis_index) {
    return DynamicsJNI.btGeneric6DofConstraint_testAngularLimitMotor(swigCPtr, this, axis_index);
}
