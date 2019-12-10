public btVector3DoubleData getAngularMotorCFM() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintDoubleData2_angularMotorCFM_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
