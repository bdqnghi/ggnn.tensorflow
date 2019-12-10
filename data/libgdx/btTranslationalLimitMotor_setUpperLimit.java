public void setUpperLimit(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor_upperLimit_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
