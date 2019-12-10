public void setTetrahedra(SoftBodyTetraData value) {
    SoftbodyJNI.btSoftBodyFloatData_tetrahedra_set(swigCPtr, this, SoftBodyTetraData.getCPtr(value), value);
}
