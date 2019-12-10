public void setBounce(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_bounce_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
