public btVector3FloatData getAngularLowerLimit() {
    long cPtr = DynamicsJNI.btGeneric6DofConstraintData_angularLowerLimit_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
