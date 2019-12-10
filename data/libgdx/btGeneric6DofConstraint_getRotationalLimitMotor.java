public btRotationalLimitMotor getRotationalLimitMotor(int index) {
    long cPtr = DynamicsJNI.btGeneric6DofConstraint_getRotationalLimitMotor(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btRotationalLimitMotor(cPtr, false);
}
