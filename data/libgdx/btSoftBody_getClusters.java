public SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Cluster_p_t getClusters() {
    long cPtr = SoftbodyJNI.btSoftBody_clusters_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SWIGTYPE_p_btAlignedObjectArrayT_btSoftBody__Cluster_p_t(cPtr, false);
}
