public btVector3 getSpringStiffness() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor2_springStiffness_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
