public void setMotorCFM(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_motorCFM_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
