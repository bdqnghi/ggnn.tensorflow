public btVector3 getTargetVelocity() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor_targetVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
