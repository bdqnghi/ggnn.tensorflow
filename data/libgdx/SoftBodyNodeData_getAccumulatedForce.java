public btVector3FloatData getAccumulatedForce() {
    long cPtr = SoftbodyJNI.SoftBodyNodeData_accumulatedForce_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
