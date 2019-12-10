public static void clusterImpulse(btSoftBody.Cluster cluster, Vector3 rpos, btSoftBody.Impulse impulse) {
    SoftbodyJNI.btSoftBody_clusterImpulse(btSoftBody.Cluster.getCPtr(cluster), cluster, rpos, btSoftBody.Impulse.getCPtr(impulse), impulse);
}
