public static void clusterVImpulse(btSoftBody.Cluster cluster, Vector3 rpos, Vector3 impulse) {
    SoftbodyJNI.btSoftBody_clusterVImpulse(btSoftBody.Cluster.getCPtr(cluster), cluster, rpos, impulse);
}
