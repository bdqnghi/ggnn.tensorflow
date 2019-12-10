public SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Anchor_t getAnchors() {
    long cPtr = SoftbodyJNI.btSoftBody_anchors_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Anchor_t(cPtr, false);
}
