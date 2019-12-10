public btVector3 getMotorCFM() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_motorCFM_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
