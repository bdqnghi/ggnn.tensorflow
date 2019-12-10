public static int MatchEdge(btSoftBody.Node a, btSoftBody.Node b, btSoftBody.Node ma, btSoftBody.Node mb) {
    return SoftbodyJNI.MatchEdge(btSoftBody.Node.getCPtr(a), a, btSoftBody.Node.getCPtr(b), b, btSoftBody.Node.getCPtr(ma), ma, btSoftBody.Node.getCPtr(mb), mb);
}
