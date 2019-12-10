public btVector3FloatData getDimpulses() {
    long cPtr = SoftbodyJNI.SoftBodyClusterData_dimpulses_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
