public btVector3FloatData getPositions() {
    long cPtr = SoftbodyJNI.SoftBodyPoseData_positions_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
