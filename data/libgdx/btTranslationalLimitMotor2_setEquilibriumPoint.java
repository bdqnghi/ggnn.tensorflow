public void setEquilibriumPoint(btVector3 value) {
    DynamicsJNI.btTranslationalLimitMotor2_equilibriumPoint_set(swigCPtr, this, btVector3.getCPtr(value), value);
}
