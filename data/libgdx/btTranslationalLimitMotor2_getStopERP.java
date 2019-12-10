public btVector3 getStopERP() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_stopERP_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
