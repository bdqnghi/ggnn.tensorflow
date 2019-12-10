public btVector3FloatData getLinearEquilibriumPoint() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearEquilibriumPoint_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
