public SoftBodyFaceData getFaces() {
    long cPtr = SoftbodyJNI.btSoftBodyFloatData_faces_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SoftBodyFaceData(cPtr, false);
}
