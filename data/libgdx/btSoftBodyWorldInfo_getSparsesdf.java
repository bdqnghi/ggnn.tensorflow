public btSparseSdf3 getSparsesdf() {
    long cPtr = SoftbodyJNI.btSoftBodyWorldInfo_sparsesdf_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSparseSdf3(cPtr, false);
}
