public btTypedConstraintData getTypeConstraintData() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_typeConstraintData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTypedConstraintData(cPtr, false);
}
