public btVector3FloatData getAngularTargetVelocity() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularTargetVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
