public void setStopCFM(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_stopCFM_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
