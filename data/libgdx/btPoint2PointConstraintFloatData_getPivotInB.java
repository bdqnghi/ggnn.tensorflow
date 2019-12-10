public btVector3FloatData getPivotInB() {
    long cPtr = DynamicsJNI.btPoint2PointConstraintFloatData_pivotInB_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
