public void setCurrentLimitError(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor_currentLimitError_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
