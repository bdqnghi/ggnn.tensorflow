public btVector3FloatData getAngularUpperLimit() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularUpperLimit_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
