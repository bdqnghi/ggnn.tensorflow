public void setPose(SoftBodyPoseData value) {
    SoftbodyJNI.btSoftBodyFloatData_pose_set(swigCPtr, this, SoftBodyPoseData.getCPtr(value), value);
}
