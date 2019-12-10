public void setServoTarget(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_servoTarget_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
