public btGeneric6DofConstraintData get6dofData() {
    long cPtr = DynamicsJNI.btGeneric6DofSpringConstraintData_6dofData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btGeneric6DofConstraintData(cPtr, false);
}
