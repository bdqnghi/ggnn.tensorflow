public btVector3 getServoTarget() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_servoTarget_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
