public SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__SContact_t getScontacts() {
    long cPtr = SoftbodyJNI.btSoftBody_scontacts_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__SContact_t(cPtr, false);
}
