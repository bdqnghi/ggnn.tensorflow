public static void clusterDAImpulse(btSoftBody.Cluster cluster, Vector3 impulse) {
    SoftbodyJNI.btSoftBody_clusterDAImpulse(btSoftBody.Cluster.getCPtr(cluster), cluster, impulse);
}
