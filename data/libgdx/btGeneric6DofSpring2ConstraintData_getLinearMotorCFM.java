public btVector3FloatData getLinearMotorCFM() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearMotorCFM_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
