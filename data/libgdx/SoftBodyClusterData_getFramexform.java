public btTransformFloatData getFramexform() {
    long cPtr = SoftbodyJNI.SoftBodyClusterData_framexform_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btTransformFloatData(cPtr, false);
}
