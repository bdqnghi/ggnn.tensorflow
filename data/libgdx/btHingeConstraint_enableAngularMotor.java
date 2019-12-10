public void enableAngularMotor(boolean enableMotor, float targetVelocity, float maxMotorImpulse) {
    DynamicsJNI.btHingeConstraint_enableAngularMotor(swigCPtr, this, enableMotor, targetVelocity, maxMotorImpulse);
}
