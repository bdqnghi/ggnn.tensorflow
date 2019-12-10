public btVector3 getUpperLimit() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_upperLimit_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
