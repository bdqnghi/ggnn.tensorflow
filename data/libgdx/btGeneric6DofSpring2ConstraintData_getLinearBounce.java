public btVector3FloatData getLinearBounce() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearBounce_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
