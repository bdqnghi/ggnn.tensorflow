public btVector3FloatData getLinearTargetVelocity() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearTargetVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
