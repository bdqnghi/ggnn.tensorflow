public btVector3FloatData getLv() {
    long cPtr = SoftbodyJNI.SoftBodyClusterData_lv_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
