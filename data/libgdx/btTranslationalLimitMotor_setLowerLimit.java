public void setLowerLimit(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor_lowerLimit_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
