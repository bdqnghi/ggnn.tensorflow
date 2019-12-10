public btVector3FloatData getLinearStopCFM() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearStopCFM_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
