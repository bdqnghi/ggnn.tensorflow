public boolean isLimited(int limitIndex) {
    return DynamicsJNI.btTranslationalLimitMotor_isLimited(swigCPtr, this, limitIndex);
}
