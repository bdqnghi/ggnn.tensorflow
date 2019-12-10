public btDbvt getFdbvt() {
    long cPtr = SoftbodyJNI.btSoftBody_fdbvt_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvt(cPtr, false);
}
