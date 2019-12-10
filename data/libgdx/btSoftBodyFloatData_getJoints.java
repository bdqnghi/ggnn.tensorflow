public btSoftBodyJointData getJoints() {
    long cPtr = SoftbodyJNI.btSoftBodyFloatData_joints_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBodyJointData(cPtr, false);
}
