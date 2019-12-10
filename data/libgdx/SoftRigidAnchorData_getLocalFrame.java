public btVector3FloatData getLocalFrame() {
    long cPtr = SoftbodyJNI.SoftRigidAnchorData_localFrame_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
