public btVector3FloatData getAngularUpperLimit() {
    long cPtr = DynamicsJNI.btGeneric6DofConstraintData_angularUpperLimit_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
