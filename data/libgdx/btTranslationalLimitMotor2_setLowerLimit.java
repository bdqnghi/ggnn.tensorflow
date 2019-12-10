public void setLowerLimit(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_lowerLimit_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
