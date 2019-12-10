public void setUpperLimit(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_upperLimit_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
