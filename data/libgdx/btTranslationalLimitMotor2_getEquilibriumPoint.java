public btVector3 getEquilibriumPoint() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_equilibriumPoint_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
