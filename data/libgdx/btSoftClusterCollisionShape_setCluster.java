public void setCluster(btSoftBody.Cluster value) {
    SoftbodyJNI.btSoftClusterCollisionShape_cluster_set(swigCPtr, this, btSoftBody.Cluster.getCPtr(value), value);
}
