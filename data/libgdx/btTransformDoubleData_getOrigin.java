public btVector3DoubleData getOrigin() {
    long cPtr = LinearMathJNI.btTransformDoubleData_origin_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}
