public int testLimitValue(int limitIndex, float test_value) {
    return DynamicsJNI.btTranslationalLimitMotor_testLimitValue(swigCPtr, this, limitIndex, test_value);
}
