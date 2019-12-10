public SWIGTYPE_p_btAlignedObjectArrayT_int_t getUserIndexMapping() {
    long cPtr = SoftbodyJNI.btSoftBody_userIndexMapping_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_int_t(cPtr, false);
}
