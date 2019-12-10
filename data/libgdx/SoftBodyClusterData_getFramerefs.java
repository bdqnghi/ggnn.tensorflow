public btVector3FloatData getFramerefs() {
    long cPtr = SoftbodyJNI.SoftBodyClusterData_framerefs_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
