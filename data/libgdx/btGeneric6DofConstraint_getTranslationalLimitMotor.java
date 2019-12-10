public btTranslationalLimitMotor getTranslationalLimitMotor() {
    long cPtr = DynamicsJNI.btGeneric6DofConstraint_getTranslationalLimitMotor(swigCPtr, this);
    return (cPtr == 0) ? null : new btTranslationalLimitMotor(cPtr, false);
}
