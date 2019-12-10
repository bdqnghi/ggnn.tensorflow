public void setRelPosition(btVector3FloatData value) {
    SoftbodyJNI.btSoftBodyJointData_relPosition_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
