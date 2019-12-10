public void setAnchors(SoftRigidAnchorData value) {
    SoftbodyJNI.btSoftBodyFloatData_anchors_set(swigCPtr, this, SoftRigidAnchorData.getCPtr(value), value);
}
