public btVector3FloatData getLinearSpringDamping() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearSpringDamping_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
