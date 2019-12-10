public SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__RContact_t getRcontacts() {
    long cPtr = SoftbodyJNI.btSoftBody_rcontacts_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__RContact_t(cPtr, false);
}
