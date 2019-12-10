public btSoftBody.Cluster getCluster() {
    long cPtr = SoftbodyJNI.btSoftClusterCollisionShape_cluster_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btSoftBody.Cluster(cPtr, false);
}
