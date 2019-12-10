public void setCurrentLimitError(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_currentLimitError_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
