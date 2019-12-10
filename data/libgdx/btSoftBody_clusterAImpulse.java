public static void clusterAImpulse(btSoftBody.Cluster cluster, btSoftBody.Impulse impulse) {
    SoftbodyJNI.btSoftBody_clusterAImpulse(btSoftBody.Cluster.getCPtr(cluster), cluster, btSoftBody.Impulse.getCPtr(impulse), impulse);
}
