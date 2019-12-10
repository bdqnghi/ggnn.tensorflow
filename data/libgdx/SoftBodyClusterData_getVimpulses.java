public btVector3FloatData getVimpulses() {
    long cPtr = SoftbodyJNI.SoftBodyClusterData_vimpulses_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
