public void setSpringDamping(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_springDamping_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
