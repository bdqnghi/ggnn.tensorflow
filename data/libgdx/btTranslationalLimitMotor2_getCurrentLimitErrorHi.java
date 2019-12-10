public btVector3 getCurrentLimitErrorHi() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_currentLimitErrorHi_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
