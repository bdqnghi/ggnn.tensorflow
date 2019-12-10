public btVector3DoubleData getLinearMotorCFM() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintDoubleData2_linearMotorCFM_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
