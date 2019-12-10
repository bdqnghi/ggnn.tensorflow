public btVector3 getSpringDamping() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_springDamping_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
