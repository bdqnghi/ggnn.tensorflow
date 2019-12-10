public void setLocalFrame(btVector3FloatData value) {
    SoftbodyJNI.SoftRigidAnchorData_localFrame_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}
