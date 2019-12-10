public void setNormalCFM(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor_normalCFM_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
