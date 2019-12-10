public boolean cutLink(btSoftBody.Node node0, btSoftBody.Node node1, float position) {
    return SoftbodyJNI.btSoftBody_cutLink__SWIG_1(swigCPtr, this, btSoftBody.Node.getCPtr(node0), node0, btSoftBody.Node.getCPtr(node1), node1, position);
}
