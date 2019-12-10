public boolean checkFace(int node0, int node1, int node2) {
    return SoftbodyJNI.btSoftBody_checkFace(swigCPtr, this, node0, node1, node2);
}
