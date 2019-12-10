public SoftRigidAnchorData getAnchors() {
    long cPtr = SoftbodyJNI.btSoftBodyFloatData_anchors_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SoftRigidAnchorData(cPtr, false);
}
