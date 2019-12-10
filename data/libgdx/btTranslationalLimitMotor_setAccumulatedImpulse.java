public void setAccumulatedImpulse(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor_accumulatedImpulse_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
