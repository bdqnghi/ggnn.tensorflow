public btSoftBody.Pose getPose() {
    long cPtr = SoftbodyJNI.btSoftBody_pose_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBody.Pose(cPtr, false);
}
