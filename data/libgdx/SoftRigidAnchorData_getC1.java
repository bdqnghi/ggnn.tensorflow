public btVector3FloatData getC1() {
    long cPtr = SoftbodyJNI.SoftRigidAnchorData_c1_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
