public void setStopCFM(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor_stopCFM_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
