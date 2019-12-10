public SoftBodyClusterData getClusters() {
    long cPtr = SoftbodyJNI.btSoftBodyFloatData_clusters_get(swigCPtr, this);
    return (cPtr == 0) ? null : new SoftBodyClusterData(cPtr, false);
}
