public btGeneric6DofConstraintDoubleData2 get6dofData() {
    long cPtr = DynamicsJNI.btGeneric6DofSpringConstraintDoubleData2_6dofData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btGeneric6DofConstraintDoubleData2(cPtr, false);
}
