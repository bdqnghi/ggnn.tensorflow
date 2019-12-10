public btVector3 getBounce() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_bounce_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
