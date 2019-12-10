public void setSpringStiffness(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_springStiffness_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
