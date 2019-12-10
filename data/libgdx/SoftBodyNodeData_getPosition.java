public btVector3FloatData getPosition() {
    long cPtr = SoftbodyJNI.SoftBodyNodeData_position_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
