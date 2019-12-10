public btVector3FloatData getOrigin() {
    long cPtr = LinearMathJNI.btTransformFloatData_origin_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
