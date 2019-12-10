public btRotationalLimitMotor2 getRotationalLimitMotor(int index) {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2Constraint_getRotationalLimitMotor(swigCPtr, this, index);
    return (cPtr == 0) ? null : new btRotationalLimitMotor2(cPtr, false);
}
