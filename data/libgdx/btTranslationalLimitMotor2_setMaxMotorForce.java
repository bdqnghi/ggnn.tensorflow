public void setMaxMotorForce(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_maxMotorForce_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
