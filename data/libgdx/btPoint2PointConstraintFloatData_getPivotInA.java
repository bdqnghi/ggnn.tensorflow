public btVector3FloatData getPivotInA() {
    long cPtr = DynamicsJNI.btPoint2PointConstraintFloatData_pivotInA_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
