public void setMotorERP(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_motorERP_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
