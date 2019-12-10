public btVector3 getMaxMotorForce() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_maxMotorForce_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
