public btVector3FloatData getAv() {
    long cPtr = SoftbodyJNI.SoftBodyClusterData_av_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
