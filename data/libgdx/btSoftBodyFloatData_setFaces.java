public void setFaces(SoftBodyFaceData value) {
    SoftbodyJNI.btSoftBodyFloatData_faces_set(swigCPtr, this, SoftBodyFaceData.getCPtr(value), value);
}
