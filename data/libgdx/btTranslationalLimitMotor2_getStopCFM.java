public btVector3 getStopCFM() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_stopCFM_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
