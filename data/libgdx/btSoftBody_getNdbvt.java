public btDbvt getNdbvt() {
    long cPtr = SoftbodyJNI.btSoftBody_ndbvt_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvt(cPtr, false);
}
