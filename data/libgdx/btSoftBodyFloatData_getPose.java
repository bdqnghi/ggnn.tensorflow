public SoftBodyPoseData getPose() {
    long cPtr = SoftbodyJNI.btSoftBodyFloatData_pose_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SoftBodyPoseData(cPtr, false);
}
