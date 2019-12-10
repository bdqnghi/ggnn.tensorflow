public void setPositions(btVector3FloatData value) {
    SoftbodyJNI.SoftBodyPoseData_positions_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
