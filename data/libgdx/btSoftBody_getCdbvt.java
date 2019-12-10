public btDbvt getCdbvt() {
    long cPtr = SoftbodyJNI.btSoftBody_cdbvt_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvt(cPtr, false);
}
