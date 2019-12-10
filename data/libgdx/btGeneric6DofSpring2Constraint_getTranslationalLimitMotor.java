public btTranslationalLimitMotor2 getTranslationalLimitMotor() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2Constraint_getTranslationalLimitMotor(swigCPtr, this);
    return (cPtr == 0) ? null : new btTranslationalLimitMotor2(cPtr, false);
}
