public btDbvtNode getLeaf() {
    long cPtr = SoftbodyJNI.btSoftBody_Cluster_leaf_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btDbvtNode(cPtr, false);
}
