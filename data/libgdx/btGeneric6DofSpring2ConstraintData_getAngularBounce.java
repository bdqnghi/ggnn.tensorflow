public btVector3FloatData getAngularBounce() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularBounce_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
