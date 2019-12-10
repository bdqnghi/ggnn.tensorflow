public btVector3FloatData getC0() {
    long cPtr = SoftbodyJNI.SoftBodyTetraData_c0_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
