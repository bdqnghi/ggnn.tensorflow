public btVector3DoubleData getPivotInB() {
    long cPtr = DynamicsJNI.btPoint2PointConstraintDoubleData2_pivotInB_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
