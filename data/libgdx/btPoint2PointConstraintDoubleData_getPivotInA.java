public btVector3DoubleData getPivotInA() {
    long cPtr = DynamicsJNI.btPoint2PointConstraintDoubleData_pivotInA_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
