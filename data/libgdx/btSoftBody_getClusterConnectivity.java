public SWIGTYPE_p_btAlignedObjectArrayT_bool_t getClusterConnectivity() {
    long cPtr = SoftbodyJNI.btSoftBody_clusterConnectivity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_bool_t(cPtr, false);
}
