public btTypedConstraintData getTypeConstraintData() {
    long cPtr = DynamicsJNI.btGeneric6DofConstraintData_typeConstraintData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTypedConstraintData(cPtr, false);
}
