public SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Node_t getNodes() {
    long cPtr = SoftbodyJNI.btSoftBody_nodes_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Node_t(cPtr, false);
}
