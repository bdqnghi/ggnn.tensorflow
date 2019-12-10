public SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Face_t getFaces() {
    long cPtr = SoftbodyJNI.btSoftBody_faces_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Face_t(cPtr, false);
}
