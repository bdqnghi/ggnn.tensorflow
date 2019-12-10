public SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Note_t getNotes() {
    long cPtr = SoftbodyJNI.btSoftBody_notes_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Note_t(cPtr, false);
}
