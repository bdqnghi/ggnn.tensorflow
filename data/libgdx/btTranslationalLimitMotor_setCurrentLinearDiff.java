public void setCurrentLinearDiff(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor_currentLinearDiff_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
