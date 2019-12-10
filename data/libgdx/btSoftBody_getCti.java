public btSoftBody.sCti getCti() {
    long cPtr = SoftbodyJNI.btSoftBody_RContact_cti_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBody.sCti(cPtr, false);
}
