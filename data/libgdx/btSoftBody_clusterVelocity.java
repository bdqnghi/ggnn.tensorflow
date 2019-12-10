public static Vector3 clusterVelocity(btSoftBody.Cluster cluster, Vector3 rpos) {
    return SoftbodyJNI.btSoftBody_clusterVelocity(btSoftBody.Cluster.getCPtr(cluster), cluster, rpos);
}
