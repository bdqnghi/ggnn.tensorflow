public void setMotorTarget(Quaternion q) {
    DynamicsJNI.btConeTwistConstraint_setMotorTarget(swigCPtr, this, q);
}
