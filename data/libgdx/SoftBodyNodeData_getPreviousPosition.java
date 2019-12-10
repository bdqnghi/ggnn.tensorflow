public btVector3FloatData getPreviousPosition() {
    long cPtr = SoftbodyJNI.SoftBodyNodeData_previousPosition_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
