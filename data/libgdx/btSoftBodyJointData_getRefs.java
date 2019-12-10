public btVector3FloatData getRefs() {
    long cPtr = SoftbodyJNI.btSoftBodyJointData_refs_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}
