public boolean needApplyForce(int limitIndex) {
    return DynamicsJNI.btTranslationalLimitMotor_needApplyForce(swigCPtr, this, limitIndex);
}
