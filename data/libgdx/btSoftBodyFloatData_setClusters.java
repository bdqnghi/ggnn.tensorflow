public void setClusters(SoftBodyClusterData value) {
    SoftbodyJNI.btSoftBodyFloatData_clusters_set(swigCPtr, this, SoftBodyClusterData.getCPtr(value), value);
}
