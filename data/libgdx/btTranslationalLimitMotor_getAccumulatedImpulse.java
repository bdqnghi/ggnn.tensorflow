public btVector3 getAccumulatedImpulse() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor_accumulatedImpulse_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
