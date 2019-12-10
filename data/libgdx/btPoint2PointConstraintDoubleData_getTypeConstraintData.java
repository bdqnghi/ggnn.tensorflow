public btTypedConstraintData getTypeConstraintData() {
    long cPtr = DynamicsJNI.btPoint2PointConstraintDoubleData_typeConstraintData_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTypedConstraintData(cPtr, false);
}
