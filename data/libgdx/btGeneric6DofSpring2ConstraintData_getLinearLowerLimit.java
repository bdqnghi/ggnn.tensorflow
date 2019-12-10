public btVector3FloatData getLinearLowerLimit() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearLowerLimit_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
