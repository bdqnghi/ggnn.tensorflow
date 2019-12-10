public boolean isLimited(int limitIndex) {
    return DynamicsJNI.btTranslationalLimitMotor2_isLimited(swigCPtr, this, limitIndex);
}
