public btVector3FloatData getAngularSpringStiffness() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularSpringStiffness_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
