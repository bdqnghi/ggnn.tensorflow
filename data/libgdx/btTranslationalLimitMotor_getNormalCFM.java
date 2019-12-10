public btVector3 getNormalCFM() {
    long cPtr = DynamicsJNI.btTranslationalLimitMotor_normalCFM_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}
