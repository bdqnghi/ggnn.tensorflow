public btVector3FloatData getAngularStopCFM() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularStopCFM_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
