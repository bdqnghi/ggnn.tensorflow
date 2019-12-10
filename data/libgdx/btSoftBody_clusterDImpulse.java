public static void clusterDImpulse(btSoftBody.Cluster cluster, Vector3 rpos, Vector3 impulse) {
    SoftbodyJNI.btSoftBody_clusterDImpulse(btSoftBody.Cluster.getCPtr(cluster), cluster, rpos, impulse);
}
