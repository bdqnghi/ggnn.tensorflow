public void setJoints(btSoftBodyJointData value) {
    SoftbodyJNI.btSoftBodyFloatData_joints_set(swigCPtr, this, btSoftBodyJointData.getCPtr(value), value);
}
