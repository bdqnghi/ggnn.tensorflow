public btSoftBody.Node getNode(int idx) {
    long cPtr = SoftbodyJNI.btSoftBody_getNode(swigCPtr, this, idx);
    return (cPtr == 0) ? null : new btSoftBody.Node(cPtr, false);
}
