public btVector3FloatData getLinearSpringStiffness() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearSpringStiffness_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
