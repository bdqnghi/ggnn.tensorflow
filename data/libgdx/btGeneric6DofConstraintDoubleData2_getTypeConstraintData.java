public btTypedConstraintDoubleData getTypeConstraintData() {
    long cPtr = DynamicsJNI.btGeneric6DofConstraintDoubleData2_typeConstraintData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTypedConstraintDoubleData(cPtr, false);
}
