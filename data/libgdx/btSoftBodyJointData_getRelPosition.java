public btVector3FloatData getRelPosition() {
    long cPtr = SoftbodyJNI.btSoftBodyJointData_relPosition_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
