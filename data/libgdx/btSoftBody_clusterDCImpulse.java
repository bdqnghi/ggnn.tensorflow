public static void clusterDCImpulse(btSoftBody.Cluster cluster, Vector3 impulse) {
    SoftbodyJNI.btSoftBody_clusterDCImpulse(btSoftBody.Cluster.getCPtr(cluster), cluster, impulse);
}
