public btVector3FloatData getAngularMotorCFM() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularMotorCFM_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
