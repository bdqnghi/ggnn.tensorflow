public SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Link_t getLinks() {
    long cPtr = SoftbodyJNI.btSoftBody_links_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Link_t(cPtr, false);
}
