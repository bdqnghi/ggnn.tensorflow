public btTypedConstraintData getTypeConstraintData() {
    long cPtr = DynamicsJNI.btHingeConstraintFloatData_typeConstraintData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTypedConstraintData(cPtr, false);
}
