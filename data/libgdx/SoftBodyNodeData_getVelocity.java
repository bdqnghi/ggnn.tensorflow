public btVector3FloatData getVelocity() {
    long cPtr = SoftbodyJNI.SoftBodyNodeData_velocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
