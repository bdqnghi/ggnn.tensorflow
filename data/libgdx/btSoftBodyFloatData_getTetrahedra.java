public SoftBodyTetraData getTetrahedra() {
    long cPtr = SoftbodyJNI.btSoftBodyFloatData_tetrahedra_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SoftBodyTetraData(cPtr, false);
}
