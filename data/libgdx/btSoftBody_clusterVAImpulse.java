public static void clusterVAImpulse(btSoftBody.Cluster cluster, Vector3 impulse) {
    SoftbodyJNI.btSoftBody_clusterVAImpulse(btSoftBody.Cluster.getCPtr(cluster), cluster, impulse);
}
