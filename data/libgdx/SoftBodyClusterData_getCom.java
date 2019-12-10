public btVector3FloatData getCom() {
    long cPtr = SoftbodyJNI.SoftBodyClusterData_com_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
