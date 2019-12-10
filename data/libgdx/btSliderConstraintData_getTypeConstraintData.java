public btTypedConstraintData getTypeConstraintData() {
    long cPtr = DynamicsJNI.btSliderConstraintData_typeConstraintData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTypedConstraintData(cPtr, false);
}
