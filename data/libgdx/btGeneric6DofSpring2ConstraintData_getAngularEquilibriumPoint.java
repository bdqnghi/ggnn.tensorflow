public btVector3FloatData getAngularEquilibriumPoint() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularEquilibriumPoint_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
