public btVector3 getMotorERP() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_motorERP_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
