public btVector3 getCurrentLinearDiff() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor_currentLinearDiff_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
