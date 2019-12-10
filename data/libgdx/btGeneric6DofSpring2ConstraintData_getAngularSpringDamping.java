public btVector3FloatData getAngularSpringDamping() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularSpringDamping_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
